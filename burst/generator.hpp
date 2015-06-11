#ifndef __MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__
#define __MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__

#include <stdio.h>

namespace myun2
{
	namespace burst
	{
		struct generator
		{
			FILE* f;
			generator(FILE *in_fp) : f(in_fp) {}
			void generate(const char* s) {
				fputs(s, f); }
			void gen(const char* s) { fputs(s, f); }
			void g(const char* s) { fputs(s, f); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__
