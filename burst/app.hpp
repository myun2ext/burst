#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

#include "css.hpp"
#include "html.hpp"
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

			void render_header(FILE *f) {
				html::header(f).render(*this);
			}
			void render_body(html_generator_base& r){
				render_header(r.f);
				r.tag("h1", title());
			}

			void render(const char* path)
			{
				if ( strcmp(path, "reset.css") == 0)
					css::reset(stdout).render();
				else
					html_generator(stdout).render(*this);
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
