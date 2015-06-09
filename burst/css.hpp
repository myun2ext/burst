#ifndef __MYUN2_GITHUB_COM__BURST__CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			void print_selector(const char* selector) { printf("%s{", selector); }
			void print_property(const char* attribute, const char* value) {
				printf("%s:%s;", attribute, value); }
			void print_close() { fputs("}", stdout); }

			void print_content(const char* content) {
				printf("content:\"%s\";", content); }

			void print_font_family(const char* font_families) {
				print_property("font-family", font_families); }

			void print_text_color(const char* color) {
				print_property("color", color); }

			void print_text_decoration(const char* style) {
				print_property("text-decoration", style); }

			void print_background_color(const char* color) {
				print_property("background-color", color); }
		}
	}
}

#include "css/px.hpp"
#include "css/box.hpp"

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			template <typename _App>
			void render_header(const _App& app)
			{
				print_selector("header");
				print_padding("0");
				print_margin("0");
				print_text_color(app.text_color());
				print_background_color(app.bgcolor());
				//print_shadow(4, 0.2);
				print_shadow("0px 5px 5px rgba(120,120,120,0.14)");
				print_close();

				/* a */
				print_selector("a");
				print_text_color(app.text_color());
				print_background_color(app.bgcolor());
				print_text_decoration("none");
				print_close();

				/* container */
				print_selector("header .container");
				print_margin("0 auto");
				print_width("92%");
				print_close();

				/* H1 */
				print_selector("header h1");
				printf("font-size: 1.4em;");
				printf("line-height: 1.9em;");
				printf("margin-bottom: 6px;");
				print_close();
			}

			template <typename _App>
			void render_basic(const _App& app)
			{
				print_selector("*");
				print_padding("0");
				print_margin("0");
				print_font_family("'Hiragino Kaku Gothic ProN', Meiryo, sans-serif");
				print_close();

				/*	body	*/
				print_selector("body");
				print_background_color(app.bgcolor());
				print_close();

				/* H1 */
				print_selector("h1");
				printf("line-height: 1.34em;");
				printf("margin-bottom: 6px;");
				print_close();

				/*	header	*/
				render_header(app.header());

				/*	main	*/
				print_selector("main");
				print_float_left();
				fputs(app.main_style(), stdout);
				print_close();

				/*	aside	*/
				print_selector("aside");
				print_float_left();
				fputs(app.aside_style(), stdout);
				print_close();
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
