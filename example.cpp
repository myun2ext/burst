#include <stdio.h>
#include <string.h>
#include "burst/html.hpp"
#include "burst/css.hpp"
#include "burst/css/form.hpp"
#include "burst/css/responsive.hpp"
#include "burst/resource.hpp"
#include "burst/app.hpp"

using namespace myun2::burst;

struct example_application : application_base
{
	const char* bgcolor() const { return "#333"; }
	const char* title() const { return "Example Application"; }

	/*	frame style  */
	struct frame_class : style_class
	{
		const char* name() const { return "frame"; }
		const char* content() const
		{
			css::print_margin("16px 1%");
			css::print_padding(px(20));
			css::print_shadow();
			css::print_border("solid #ddd 1.4px");
			css::print_border_radius(px(6));
			css::print_background_color("white");
			css::print_float_left();
			return "";
		}
	};

	struct side_menu : content_base
	{
		const char* classes() const { return "frame"; }
		const char* tag() const { return "aside"; }
	};

	struct main_content : content_base
	{
		const char* classes() const { return "frame"; }
		const char* tag() const { return "main"; }
		const char* content() const {
			html::print_h1("Example Application");
			return "";
		}
	};

	void render_style() const {
		frame_class().print();
	}
	void render_html() const {
		side_menu().print_html();
		main_content().print_html();
	}
};

int main(int argc, char *argv[])
{
	example_application app;

	if ( strcmp(argv[1], "basic.css") == 0) {
		css::render_basic(app);
		app.render_style();
	}

	else if ( strcmp(argv[1], "index.html") == 0)
		html::render(app);

	else if ( strcmp(argv[1], "post") == 0) {
		resource r("post", argv[2]);
		r.create("txt", argv[3]);
	}

	return 0;
}
