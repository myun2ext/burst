#ifndef __MYUN2_GITHUB_COM__BURST__CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS_HPP__

#include "css/base.hpp"
#include "css/px.hpp"
#include "css/box.hpp"
#include "css/responsive.hpp"
#include "css/reset.hpp"

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			struct base : box, responsive
			{
				base(FILE* f_in) : box(f_in) {}

				void background_color(const char* color) {
					property("background-color", color); }
				void text_color(const char* color) {
					property("color", color); }
				void font_size(const char* size) {
					property("font-size", size); }
				void font_family(const char* families) {
					property("font-family", families); }
				void transition(float time_sec) {
					generate("-webkit-transition:%fs;", time_sec);
					generate("transition:%fs;", time_sec); }

				void _generate(const char*s, unsigned int n){generate(s,n);}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
