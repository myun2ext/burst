#ifndef __MYUN2_GITHUB_COM__BURST__APP__HTML_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__HTML_HPP__

#include "../html.hpp"
#include "header.hpp"
#include "main.hpp"
#include "footer.hpp"

namespace myun2
{
	namespace burst
	{
		namespace app
		{
			struct html_document : html_generator<5>
			{
				void render_header() {
					html::header().render(f);
				}
				void render_main() {
					html::main().render(f);
				}
				void render_footer() {
					html::footer().render(f);
				}

				void render_body_content()
				{
					render_header();
					render_main();
					render_footer();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__DOCUMENT_CONTENT_HPP__
