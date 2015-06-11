#ifndef __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__

#include "logo.hpp"

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct header : html_generator_base
			{
				header(FILE* f_in) : html_generator_base(f_in){}

				template <typename _Context>
				void render(_Context& context)
				{
					open_tag("header");
					logo(f).render(context);
					close_tag("header");
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
