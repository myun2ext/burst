#include <stdio.h>
#include "burst/html.hpp"
#include "burst/html/doctype.hpp"

int main()
{
	myun2::burst::html_generator h(stdout);
	h.start();

	h.tag("h1", "Hello World");

	return 0;
}
