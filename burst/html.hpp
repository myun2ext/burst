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

			void print_open_div(const char* class_name) {
				printf("<div class=\"%s\">", class_name); }
			void print_close_div() { printf("</div>"); }

			void print_a(const char* href) {
				printf("<a href=\"%s\">", href); }
			void print_close_a() { printf("</a>"); }

			void print_container() {
				fputs("<div class=\"container\">", stdout); }

			void print_start_section() { printf("<section>"); }
			void print_end_section() { printf("</section>"); }
			void print_start_article() { printf("<article>"); }
			void print_end_article() { printf("</article>"); }

			template <unsigned char N>
			void print_heading(const char* content) {
				printf("<h%d>%s</h%d>", N, content, N); }
		}
	}
}

#include "html/head.hpp"
#include "html/body.hpp"
#include "html/form.hpp"

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
