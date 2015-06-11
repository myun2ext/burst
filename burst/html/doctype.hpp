#ifndef __MYUN2_GITHUB_COM__BURST__HTML__DOCTYPE_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__DOCTYPE_HPP__

#include "generator.hpp"

namespace myun2
{
	namespace burst
	{
		template <unsigned char HtmlVersion>
		struct doctype_generator;

		//	HTML5
		template <> struct doctype_generator<5> : generator {
			void generate() { gen("<!DOCTYPE html>"); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__DOCTYPE_HPP__
