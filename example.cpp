#include <stdio.h>
#include <string.h>
#include "burst/app.hpp"
#include "burst/html.hpp"
#include "burst/css.hpp"
#include "burst/css/form.hpp"
#include "burst/css/responsive.hpp"
#include "burst/resource.hpp"

using namespace myun2::burst;

struct example_application : application_base
{
	const char* bgcolor() const { return "#333"; }
	const char* title() const { return "Example Application"; }

	struct header_content {
		const char* text_color() const { return "white"; }
		const char* bgcolor() const { return "#080808"; }
		const char* title() const { "Example"; }
	};
	const header_content header() const { return header_content(); }

	const char* main_style() const
	{
		css::print_margin("14px 0px");
		css::print_padding(px(20));
		css::print_width("65%");
		css::print_shadow();
		css::print_border("solid #ddd 1.4px");
		css::print_border_radius(px(6));
		css::print_background_color("white");
		css::print_close();

		/*	Responsive small screen */
		css::print_screen_under(390);
		css::print_selector("main");
		css::print_width("100%");
		css::print_close();

		return "";
	}

	const char* aside_style() const
	{
		css::print_margin("14px 20px");
		css::print_padding(px(20));
		css::print_width("20%");
		css::print_shadow();
		css::print_border("solid #ddd 1.4px");
		css::print_border_radius(px(6));
		css::print_background_color("white");
		css::print_close();

		/*	Responsive small screen */
		css::print_screen_under(390);
		css::print_selector("main");
		css::print_width("100%");
		css::print_close();

		return "";
	}
	const char* article_content() const {
		html::print_form("post");
		html::print_label_with_text_input("column1", "A", "aaaa");
		html::print_label_with_text_input("column2", "B", "bbbb");
		html::print_submit("");
		html::print_close_tag("form");
		return "aa";
	}
};

int main(int argc, char *argv[])
{
	example_application app;

	if ( strcmp(argv[1], "basic.css") == 0) {
		css::render_basic(app);
		css::render_form_styles(app);
	}

	else if ( strcmp(argv[1], "index.html") == 0)
		html::render(app);

	else if ( strcmp(argv[1], "post") == 0) {
		resource r("post", argv[2]);
		r.create("txt", argv[3]);
	}

	return 0;
}
