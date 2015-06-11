#ifndef __MYUN2_GITHUB_COM__BURST__CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS_HPP__

#include "generator.hpp"

namespace myun2
{
	namespace burst
	{
		struct css_generator_base : generator
		{
			css_generator_base(FILE* f_in) : generator(f_in){}

			void start_selector(const char* selector) {
				generate("%s{", selector); }
			void property(const char* attribute, const char* value) {
				generate("%s:%s;", attribute, value); }
			void close() { generate("}"); }
		};
	}
}

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

			void print_background_color(const char* color) {
				print_property("background-color", color); }

			void print_content(const char* content) {
				printf("content:\"%s\";", content); }

			void print_text_color(const char* color) {
				print_property("color", color); }

			void print_text_decoration(const char* style) {
				print_property("text-decoration", style); }

			void print_font_size(const char* size) {
				print_property("font-size", size); }

			void print_font_family(const char* font_families) {
				print_property("font-family", font_families); }

			void print_line_height(const char* height) {
				print_property("line-height", height); }

			void print_transition(float time_sec) {
				printf("-webkit-transition:%fs;", time_sec);
				printf("transition:%fs;", time_sec); }

			template <typename _Fn>
			void print_style(const char* selector, _Fn fn) {
				print_selector(selector);
				fn();
				print_close();
			}
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
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
