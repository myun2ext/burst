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

			void print_html5_doctype() {
				printf("<!DOCTYPE html>"); }

			void print_meta_charaset(const char* charset) {
				printf("<meta charset=\"%s\">", charset); }

			void print_stylesheet_link_tag(const char* path) {
				printf("<link rel=\"stylesheet\" href=\"%s\">", path); }

			void print_title_tag(const char* title) {
				print_open_tag ("title");
				fputs(title, stdout);
				print_close_tag("title"); }

			template <typename _App>
			void render_body(const _App& app)
			{
				print_open_tag ("body");
				print_open_tag("h1");
				fputs(app.title(), stdout);
				print_close_tag ("h1");
				print_close_tag("body");
			}

			template <typename _App>
			void render(const _App& app)
			{
				print_html5_doctype();
				print_open_tag ("html");

				/*  Head  */
				print_open_tag ("head");
				print_meta_charaset("UTF-8");
				print_stylesheet_link_tag("reset.css");
				print_title_tag(app.title());
				print_close_tag("head");

				render_body(app);
				print_close_tag("html");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
