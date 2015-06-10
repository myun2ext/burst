#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

namespace myun2
{
	namespace burst
	{
		struct application_base
		{
			virtual const char* bgcolor() const { return "#eee"; }
			virtual const char* txtcolor() const { return "#000"; }
			virtual const char* title() const { return "Application"; }
			virtual void render_html() const =0;
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

		struct content_base
		{
			virtual const char* tag() const { return "div"; };
			virtual const char* classes() const { return ""; }
			virtual const char* content() const { return ""; }
			void print_html() const {
				printf("<%s class=\"%s\">", tag(), classes());
				fputs(content(), stdout);
				printf("</%s>", tag());
			}
		};

		struct box
		{
			virtual const char* margin() const { return "0"; };
			virtual const char* padding() const { return "0"; }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
