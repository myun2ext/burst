#ifndef __MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			struct box : css_generator_base
			{
				box(FILE* f_in) : css_generator_base(f_in){}

				/*  Padding  */
				void padding(const char* padding) {
					property("padding", padding); }
				void padding(int all) { generate("padding:%dpx;", all); }
				void padding(int vertical, int horizontal) {
					generate("padding:%dpx %dpx;", vertical, horizontal); }
				void padding(int top, int horizontal, int bottom) {
					generate("padding:%dpx %dpx %dpx;", top, horizontal, bottom); }
				void padding(int top, int right, int bottom, int left) {
					generate("padding:%dpx %dpx %dpx %dpx;", top, right, bottom, left); }

				/*  Margin  */
				void margin(const char* margin) {
					property("margin", margin); }
				void margin(int all) { generate("margin:%dpx;", all); }
				void margin(int vertical, int horizontal) {
					generate("margin:%dpx %dpx;", vertical, horizontal); }
				void margin(int top, int horizontal, int bottom) {
					generate("margin:%dpx %dpx %dpx;", top, horizontal, bottom); }
				void margin(int top, int right, int bottom, int left) {
					generate("margin:%dpx %dpx %dpx %dpx;", top, right, bottom, left); }

				/*  width / height  */
				void width(const char* width) {
					property("width", width); }
				void height(const char* height) {
					property("height", height); }

				/*  Border  */
				void border(const char* str) {
					property("border", str); }
				void border_radius(const char* value) {
					property("border-radius", value); }

				/*  Shadow  */
				void shadow(const char* str) {
					property("box-shadow", str); }
				void shadow(int px = 12, float alpha = 0.4) {
					generate("box-shadow: %dpx %dpx %dpx rgba(0,0,0,%f);", px, px, px, alpha); }

				/*  Float  */
				void float_left() {
					property("float", "left"); }

				void float_right() {
					property("float", "right"); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__
