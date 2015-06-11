#ifndef __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct head_renderer : html_generator_base
			{
				head_renderer(FILE* f_in) : html_generator_base(f_in) {}

				template <typename _Context>
				void generate(const _Context &context)
				{
					start_tag("head");
					gen_charaset(context);
					//gen_stylesheet_link_tag("basic.css");
					gen_title(context);
					close_tag("head");
				}
			private:
				template <typename _Context>
				void gen_charaset(const _Context &context) {
					gen("<meta charset=\"%s\">", context.charset()); }

				//template <typename _Context>
				//void stylesheet_link_tag(const _Context &context) {
				//	gen("<link rel=\"stylesheet\" href=\"%s\">", path); }

				template <typename _Context>
				void gen_title(const _Context &context) {
					tag("title", context.title()); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
