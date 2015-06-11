#ifndef __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct head
			{
				virtual const char* charset() const { return "UTF-8"; }
				virtual const char* title() const { return ""; }
			};

			struct head_renderer : html_generator_base
			{
				const head &context;
				head_renderer(FILE* f_in, const head& context_in) : html_generator_base(f_in), context(context_in) {}

				void generate()
				{
					start_tag("head");
					gen_charaset();
					//gen_stylesheet_link_tag("basic.css");
					gen_title();
					close_tag("head");
				}
			private:
				void gen_charaset() {
					gen("<meta charset=\"%s\">", context.charset()); }

				void stylesheet_link_tag(const char* path) {
					gen("<link rel=\"stylesheet\" href=\"%s\">", path); }

				void gen_title() {
					tag("title", context.title()); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
