#ifndef __MYUN2_GITHUB_COM__BURST__HTML__NAVIGATION_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__NAVIGATION_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			template <typename _App>
			void render_navigation(const _App& app)
			{
				print_open_tag ("nav");
				print_ul();
				for(int i=0; i<app.navigations.length(); i++)
					print_li_link(app.navigations[i].first, app.navigations[i].second);
				print_close("ul");
				print_close_tag("nav");
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__NAVIGATION_HPP__
