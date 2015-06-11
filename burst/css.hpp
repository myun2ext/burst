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

			void selector(const char* s) {
				generate("%s{", s); }
			void property(const char* attribute, const char* value) {
				generate("%s:%s;", attribute, value); }
			void end() { generate("}"); }
			void close() { generate("}"); }
		};
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
			struct base : box
			{
				base(FILE* f_in) : box(f_in){}

				void background_color(const char* color) {
					property("background-color", color); }
				void text_color(const char* color) {
					property("color", color); }
				void font_family(const char* families) {
					property("font-family", families); }
			};

			struct reset : base
			{
				reset(FILE* f_in) : base(f_in){}
				void render()
				{
					selector("*");
					padding("0");
					margin("0");
					close();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
