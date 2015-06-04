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

			void print_padding(const char* padding) {
				print_property("padding", padding); }

			void print_margin(const char* margin) {
				print_property("margin", margin); }

			void print_font_family(const char* font_families) {
				print_property("font-family", font_families); }

			void print_background_color(const char* color) {
				print_property("background-color", color); }

			template <typename _App>
			void render_reset(const _App& app)
			{
				print_selector("*");
				print_padding("0");
				print_margin("0");
				print_font_family("'Hiragino Kaku Gothic ProN', Meiryo, sans-serif");
				print_background_color(app.bgcolor());
				print_close();
			}
			template <typename _App>
			void render_basic(const _App& app)
			{
				/*	Body  */
				print_selector("body");
				print_close();
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
