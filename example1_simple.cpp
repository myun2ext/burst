#include <stdio.h>
#include "burst/html.hpp"
#include "burst/html/doctype.hpp"

int main()
{
	myun2::burst::html_generator h(stdout);
	h.start();
	h.render_head();
	h.start_body();

	h.tag("h1", "Hello World");

	h.end_body();
	return 0;
}
