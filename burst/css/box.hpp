#ifndef __MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			/*  Padding  */
			void print_padding(const char* padding) {
				print_property("padding", padding); }
			void print_padding(int all) { printf("padding:%dpx;", all); }
			void print_padding(int vertical, int horizontal) {
				printf("padding:%dpx %dpx;", vertical, horizontal); }
			void print_padding(int top, int horizontal, int bottom) {
				printf("padding:%dpx %dpx %dpx;", top, horizontal, bottom); }
			void print_padding(int top, int right, int bottom, int left) {
				printf("padding:%dpx %dpx %dpx %dpx;", top, right, bottom, left); }

			/*  Margin  */
			void print_margin(const char* margin) {
				print_property("margin", margin); }
			void print_margin(int all) { printf("margin:%dpx;", all); }
			void print_margin(int vertical, int horizontal) {
				printf("margin:%dpx %dpx;", vertical, horizontal); }
			void print_margin(int top, int horizontal, int bottom) {
				printf("margin:%dpx %dpx %dpx;", top, horizontal, bottom); }
			void print_margin(int top, int right, int bottom, int left) {
				printf("margin:%dpx %dpx %dpx %dpx;", top, right, bottom, left); }

			void print_width(const char* width) {
				print_property("width", width); }

			void print_border(const char* str) {
				print_property("border", str); }

			void print_shadow(const char* str) {
				print_property("box-shadow", str); }
			void print_shadow(int px = 10, float alpha = 0.4) {
				printf("box-shadow: %dpx %dpx %dpx rgba(0,0,0,%f);", px, px, px, alpha); }

			void print_border_radius(const char* value) {
				print_property("border-radius", value); }

			void print_float_left() {
				print_property("float", "left"); }

			void print_float_right() {
				print_property("float", "right"); }
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__
