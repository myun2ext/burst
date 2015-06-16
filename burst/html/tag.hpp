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
				struct null_content {
					template <typename _Context>
					void render(_Context& context, FILE* stream) {}
				};
				tag_generator(const char* name_in, FILE* f_in)
					: html::tag(name_in), html_generator_base(f_in) {}

				virtual void start() { open_tag(name); }
				virtual void end() { close_tag(name); }

				template <typename _Content, typename _Context>
				void render(_Content& content, const _Context& context, FILE* stream = stdout)
				{
					f = stream;
					start();
					content.render(context, stream);
					end();
				}
				void render() { null_content nc; render(nc, 0); }
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__
