#ifndef __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct logo : html_generator_base
			{
				logo(FILE* f_in) : html_generator_base(f_in){}

				template <typename _Context>
				void render(_Context& context)
				{
					div_with_class("logo");
					open_tag("h1");
					start_a("/");
					generate(context.logo());
					close_a();

					close_tag("h1");
					close_div();//close div logo
				}
			};
			struct header : html_generator_base
			{
				header(FILE* f_in) : html_generator_base(f_in){}

				template <typename _Context>
				void render(_Context& context)
				{
					open_tag("header");
					start_container();
					logo(f).render(context);
					close_container();
					close_tag("header");
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
