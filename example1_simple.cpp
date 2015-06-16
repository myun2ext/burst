#include "burst/html.hpp"
using namespace myun2::burst;

int main(int argc, char *argv[])
{
	html_generator<5> h;
	h.render();
	return 0;
}
