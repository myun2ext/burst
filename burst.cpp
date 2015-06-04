#include <stdio.h>
#include "burst.hpp"

using namespace myun2::burst;

int main()
{
	printf("<!DOCTYPE html>");
	print_open_tag ("html");

	print_open_tag ("head");
	print_open_tag ("title");
	print_close_tag("title");
	print_close_tag("head");
	print_open_tag ("body");
	print_close_tag("body");

	print_close_tag("html");
	return 0;
}
