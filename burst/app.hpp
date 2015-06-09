#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

namespace myun2
{
	namespace burst
	{
		struct application_base
		{
			struct header_content
			{
				const char* txtcolor() const { return "white"; }
				const char* bgcolor() const { return "#080808"; }
				const char* title() const { "Application"; }
			};
			virtual const char* bgcolor() const { return "#eee"; }
			virtual const char* txtcolor() const { return "#000"; }
			virtual const char* title() const { return "Application"; }
		};

		struct style {
			virtual const char* selector() const =0;
			virtual const char* content() const { return ""; }
			void print() const
			{
				css::print_selector(selector());
				content();
				css::print_close();
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
