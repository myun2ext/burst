#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

#include "css.hpp"
#include "html.hpp"
#include "app/basic_css.hpp"
#include "app/header.hpp"
#include <vector>
#include <string.h>

namespace myun2
{
	namespace burst
	{
		struct application_base
		{
			::std::vector<const char*> stylesheets;
			application_base() {
				stylesheets.push_back("reset.css");
			}
			virtual const char* charset() const { return "UTF-8"; }
			virtual const char* title() const { return ""; }
			virtual const char* logo() const { return title(); }

			virtual void render_css(FILE *f) {
				app::basic_css(f).render();
			}
			virtual void render_header(html_generator_base& r) {
				html::header(r.f).render(*this);
			}
			virtual void render_content(html_generator_base& r) {}
			virtual void render_body(html_generator_base& r){
				render_header(r);
				r.div_with_class("main-container");
				r.tag("h1", title());
				render_content(r);
				r.close_div();
			}

			virtual void render(const char* path)
			{
				if ( path == NULL || strcmp(path, "index.html") == 0)
					html_generator(stdout).render(*this);

				else if ( strcmp(path, "reset.css") == 0)
					css::reset(stdout).render();

				else if ( strcmp(path, "application.css") == 0)
					render_css(stdout);
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
