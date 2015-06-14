#ifndef __MYUN2_GITHUB_COM__BURST__APP__DOCUMENT_CONTENT_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__DOCUMENT_CONTENT_HPP__

#include "header.hpp"

namespace myun2
{
	namespace burst
	{
		struct app_document_content : html_generator_base
		{
			header(FILE* f_in) : html_generator_base(f_in){}

			template <typename _Context>
			void render(_Context& context)
			{
				open_tag("header");
				start_container();
				logo(f).render(context);
				close_container();
			}

			virtual void render_body(html_generator_base& r)
			{
				open_tag("header");
				render_header(r);
				close_tag("header");

				r.div_with_class("main-container");
				r.tag("h1", title());
				render_content(r);
				r.close_div();

				open_tag("footer");
				render_header(r);
				close_tag("footer");
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__DOCUMENT_CONTENT_HPP__
