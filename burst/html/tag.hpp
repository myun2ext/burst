#ifndef __MYUN2_GITHUB_COM__BURST__HTML__TAG_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__TAG_HPP__

#include "../generator.hpp"

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct tag
			{
				const char* name;
				tag(const char* name_in) : name(name_in) {}
			};

			struct tag_generator : tag, html_generator_base
			{
				tag_generator(const char* name_in) : tag(name_in), html_generator_base(0) {}

				void start() { open_tag(name);
				void end() { close_tag(name);

				template <typename _Context>
				void render_content(_Context& context) {}

				template <typename _Context>
				void render(_Context& context)
				{
					start();
					render_content();
					end();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__
