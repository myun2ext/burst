#include <stdio.h>
#include <string.h>
#include "burst/html.hpp"
#include "burst/css.hpp"

using namespace myun2::burst;

struct example_application
{
	const char* bgcolor() const { return "#eee"; }
	const char* title() const { return "Example Application"; }

	struct header_content {
		const char* text_color() const { return "white"; }
		const char* bgcolor() const { return "#111"; }
	};
	const header_content header() const { return header_content(); }

	const char* main_style() const { return
		"margin: 12px auto;"
		"padding: 10px;"
		"width: 90%;"
		"border: solid #ddd 1px;"
		"background-color: white;"
	;}
};

int main(int argc, char *argv[])
{
	example_application app;

	if ( strcmp(argv[1], "basic.css") == 0)
		css::render_basic(app);

	else if ( strcmp(argv[1], "index.html") == 0)
		html::render(app);

	return 0;
}
