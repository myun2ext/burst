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
				print_open_tag ("div class=\"container\"");
				print_open_tag ("h1");
				fputs(app.title(), stdout);
				print_close_tag ("h1");
				print_close_tag ("div");
				print_close_tag("header");
			}

			template <typename _App>
			void render_body(const _App& app)
			{
				/*  Open  */
				print_open_tag ("body");

				/*  Header  */
				render_header(app);

				/*  Main  */
				print_open_tag ("main");
				print_heading<1>(app.title());

				print_start_article();
				fputs(app.article_content(), stdout);
				print_end_article();

				print_close_tag("main");

				/*  Close  */
				print_close_tag("body");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__BODY_HPP__
