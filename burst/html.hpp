#ifndef __MYUN2_GITHUB_COM__BURST__HTML_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			void print_open_tag(const char* tag_name) {
				printf("<%s>", tag_name); }
			void print_tag(const char* tag_name) { print_open_tag(tag_name); }
			void print_close_tag(const char* tag_name) {
				printf("</%s>", tag_name); }

			template <typename _App>
			void render(const _App& app)
			{
				printf("<!DOCTYPE html>");
				print_open_tag ("html");

				print_open_tag ("head");
				printf("<meta charset=\"UTF-8\">");
				print_open_tag ("title");
				fputs(app.title(), stdout);
				print_close_tag("title");
				print_close_tag("head");

				print_open_tag ("body");
				print_open_tag("h1");
				fputs(app.title(), stdout);
				print_close_tag ("h1");
				print_close_tag("body");

				print_close_tag("html");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
