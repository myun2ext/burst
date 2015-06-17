#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

#include "app/html.hpp"
#include "css/reset.hpp"
#include "app/application_css.hpp"
#include <vector>
#include <string.h>

namespace myun2
{
	namespace burst
	{
		struct application_base
		{
			FILE* f;
			virtual void render_reset_css() {
				css::reset(f).render();
			}
			virtual void render_application_css() {
				app::basic_css(f).render();
			}
			virtual void render_document(const char* path) {
				app::html_document().render(f);
			}

			virtual void render(const char* path, FILE* fp = stdout)
			{
				f = fp;
				if ( path == NULL )
					render_document(NULL);

				else if ( strcmp(path, "reset.css") == 0)
					render_reset_css();

				else if ( strcmp(path, "application.css") == 0)
					render_application_css();

				else
					render_document(path);
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
