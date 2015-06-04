#include <stdio.h>
#include <string.h>
#include "burst/html.hpp"
#include "burst/css.hpp"

using namespace myun2::burst;

struct example_application
{
	const char* bgcolor() const { return "white"; }
	const char* title() const { return "Example Application"; }
};

int main(int argc, char *argv[])
{
	example_application app;

	if ( strcmp(argv[1], "reset.css") == 0)
		css::base(app);

	else if ( strcmp(argv[1], "index.html") == 0)
		html::render(app);

	return 0;
}
