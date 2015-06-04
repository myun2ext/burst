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
				print_close_tag("header");
			}

			template <typename _App>
			void render_body(const _App& app)
			{
				print_open_tag ("body");

				render_header(app);
				print_open_tag("h1");
				fputs(app.title(), stdout);
				print_close_tag ("h1");
				print_close_tag("body");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__BODY_HPP__
