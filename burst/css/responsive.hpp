#ifndef __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			struct responsive : generator
			{
				responsive(FILE* f_in) : generator(f_in) {}
				//virtual void generate(const char* s, unsigned int n)=0;
				void _screen_under_width(unsigned int width) {
					generate("@media screen and (max-width: %dpx){", width); }

				void _screen_over_width(unsigned int width) {
					generate("@media screen and (min-width: %dpx){", width); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
