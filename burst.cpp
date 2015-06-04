#include <stdio.h>
#include "burst/html.hpp"

using namespace myun2::burst;

struct example_application
{
	const char* title() const { return "Example Application"; }
};

int main()
{
	html::render(example_application());
	return 0;
}
