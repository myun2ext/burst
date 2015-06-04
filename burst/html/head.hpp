#ifndef __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			void print_meta_charaset(const char* charset) {
				printf("<meta charset=\"%s\">", charset); }

			void print_stylesheet_link_tag(const char* path) {
				printf("<link rel=\"stylesheet\" href=\"%s\">", path); }

			void print_title_tag(const char* title) {
				print_open_tag ("title");
				fputs(title, stdout);
				print_close_tag("title"); }

			template <typename _App>
			void render_head(const _App& app)
			{
				print_open_tag ("head");
				print_meta_charaset("UTF-8");
				print_stylesheet_link_tag("reset.css");

				print_title_tag(app.title());
				print_close_tag("head");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
