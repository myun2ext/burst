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
		}
	}
}

#include "html/head.hpp"
#include "html/body.hpp"

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			void print_html5_doctype() {
				printf("<!DOCTYPE html>"); }

			template <typename _App>
			void render(const _App& app)
			{
				print_html5_doctype();
				print_open_tag ("html");

				render_head(app);
				render_body(app);
				print_close_tag("html");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
