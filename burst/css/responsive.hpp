#ifndef __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			struct responsive
			{
				virtual void _generate(const char* s, unsigned int n)=0;
				void _screen_under_width(unsigned int width) {
					_generate("@media screen and (max-width: %dpx){", width); }

				void _screen_over_width(unsigned int width) {
					_generate("@media screen and (min-width: %dpx){", width); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__RESPONSIVE_HPP__
