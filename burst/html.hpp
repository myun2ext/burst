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

			void render()
			{
				printf("<!DOCTYPE html>");
				print_open_tag ("html");

				print_open_tag ("head");
				print_open_tag ("title");
				print_close_tag("title");
				print_close_tag("head");
				print_open_tag ("body");
				print_close_tag("body");

				print_close_tag("html");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
