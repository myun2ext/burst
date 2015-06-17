#ifndef __MYUN2_GITHUB_COM__BURST__HTML__TAG_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__TAG_HPP__

#include "../generator.hpp"

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct tag_
			{
				const char* name;
				tag_(const char* name_in) : name(name_in) {}
			};

			struct tag_generator : tag_, html_generator_base
			{
				struct null_content {
					template <typename _Context>
					void render(_Context& context, FILE* stream) {}
				};
				tag_generator(const char* name_in, FILE* f_in = NULL)
					: tag_(name_in), html_generator_base(f_in) {}

				virtual void start() { open_tag(name); }
				virtual void end() { close_tag(name); }

				virtual void render_content(){}
				void render(FILE* stream = stdout)
				{
					f = stream;
					start();
					render_content();
					end();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__
