#ifndef __MYUN2_GITHUB_COM__BURST__HTML_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			void _puts(const char* str) { fputs(str, stdout); }

			void print_open_tag(const char* tag_name) {
				printf("<%s>", tag_name); }
			void print_tag(const char* tag_name, const char* content) {
				printf("<%s>%s</%s>", tag_name, content, tag_name); }
			void print_close_tag(const char* tag_name) {
				printf("</%s>", tag_name); }

			void print_open_div(const char* class_name) {
				printf("<div class=\"%s\">", class_name); }
			void print_close_div() { _puts("</div>"); }

			void print_a(const char* href) {
				printf("<a href=\"%s\">", href); }
			void print_close_a() { _puts("</a>"); }

			void print_ul() { _puts("<ul>"); }
			void print_close_ul() { _puts("</ul>"); }

			void print_li(const char* title) {
				print_tag("li", title); }
			void print_li_link(const char* title, const char* href) {
				printf("<li><a href=\"%s\">%s</a></li>", href, title); }

			void print_h1(const char* title) {
				print_tag("h1", title); }

			void print_container() {
				_puts("<div class=\"container\">"); }

			void print_start_section() { _puts("<section>"); }
			void print_end_section() { _puts("</section>"); }
			void print_start_article() { _puts("<article>"); }
			void print_end_article() { _puts("</article>"); }
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
				/*	head & body  */
				render_head(app);
				app.render_html();
				print_close_tag("html");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
