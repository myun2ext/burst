#ifndef __MYUN2_GITHUB_COM__BURST__BODY_HPP__
#define __MYUN2_GITHUB_COM__BURST__BODY_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			template <typename _App>
			void render_header(const _App& app)
			{
				print_open_tag ("header");
				print_container();

				print_open_tag ("h1");
				print_a("/");
				fputs(app.title(), stdout);
				print_close_a();
				print_close_tag ("h1");

				print_close_div();
				print_close_tag("header");
			}

			template <typename _App>
			void render_aside(const _App& app)
			{
				print_open_tag ("aside");
				print_close_tag("aside");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__BODY_HPP__
