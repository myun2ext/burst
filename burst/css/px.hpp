#ifndef __MYUN2_GITHUB_COM__BURST__CSS__PX_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__PX_HPP__

#include <stdio.h>

namespace myun2
{
	namespace burst
	{
		struct px {
			const int value;
			char str[16];
			px(int in) : value(in){
				sprintf(str, "%dpx", value);
			}
			const char* to_str() const { return str; }
			const char* to_s() const { return str; }
			operator const char*() { return to_s(); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__BOX_HPP__
