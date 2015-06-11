#include "burst/app.hpp"
#include "burst/html.hpp"
using namespace myun2::burst;

struct example_application : application_base
{
	const char* title() const { return "Example Application"; }
};

int main(int argc, char *argv[])
{
	example_application app;

	if (argc > 1)
		app.render(argv[1]);
	else
		app.render("index.html");

	return 0;
}
