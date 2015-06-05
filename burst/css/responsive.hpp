#ifndef __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			void print_screen_under(unsigned int width) {
				printf("@media screen and (max-width: %dpx){", width); }

			void print_screen_over(unsigned int width) {
				printf("@media screen and (min-width: %dpx){", width); }
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
