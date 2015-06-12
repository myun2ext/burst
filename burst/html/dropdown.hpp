#ifndef __MYUN2_GITHUB_COM__BURST__HTML__DROPDOWN_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__DROPDOWN_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct dropdown : html_generator_base
			{
				dropdown(FILE* f_in) : html_generator_base(f_in){}

				template <typename _Menu>
				void render(const _Menu& menu)
				{
					open_tag("ul", "class=\"dropdown\"");
					for(unsigned int i=0; i<menu.size(); i++) {
						open_tag("li", "class=\"dropdown-list\"");
						a_tag(menu.first, menu.second);
						close_tag("li");
					}
					close_tag("ul");
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__DROPDOWN_HPP__
