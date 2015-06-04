#include <stdio.h>
#include <string.h>
#include "burst/html.hpp"
#include "burst/css.hpp"

using namespace myun2::burst;

struct example_application
{
	const char* title() const { return "Example Application"; }
};

int main(int argc, char *argv[])
{
	if ( strcmp(argv[1], "reset.css") == 0)
		css::reset();
	else if ( strcmp(argv[1], "index.html") == 0)
		html::render(example_application());
	return 0;
}
