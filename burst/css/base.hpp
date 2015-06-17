#ifndef __MYUN2_GITHUB_COM__BURST__CSS__BASE_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__BASE_HPP__

#include "../generator.hpp"

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

#endif//__MYUN2_GITHUB_COM__BURST__CSS__BASE_HPP__
