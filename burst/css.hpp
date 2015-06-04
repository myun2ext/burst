#ifndef __MYUN2_GITHUB_COM__BURST__CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			void print_selector(const char* selector) { printf("%s{", selector); }
			void print_property(const char* attribute, const char* value) { printf("%s:%s;", attribute, value); }
			void print_close() { fputs("}", stdout); }

			void reset()
			{
				print_selector("*");
				print_property("margin", "0");
				print_property("padding", "0");
				print_close();
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS_HPP__
