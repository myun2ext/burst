#ifndef __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__

#include <vector>

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			struct head : html::tag_generator
			{
				::std::vector<const char*> stylesheets;
				head(FILE* f_in = NULL) : html::tag_generator("head", f_in) {}

				virtual const char* charset() const { return "UTF-8"; }
				virtual const char* title() const { return ""; }

				void render_content()
				{
					render_meta_charaset();
					render_title();
					render_stylesheet_link_tags();
				}
			private:
				void render_meta_charaset() {
					gen("<meta charset=\"%s\">", charset());
				}
				void render_title() {
					tag("title", title());
				}
				void render_stylesheet_link_tags() {
					for(int i=0; i<stylesheets.size(); i++)
						gen("<link rel=\"stylesheet\" href=\"%s\">", stylesheets[i]);
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__HEAD_HPP__
