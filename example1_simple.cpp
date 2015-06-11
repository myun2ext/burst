#include "burst/css.hpp"
#include "burst/html.hpp"
#include <vector>
#include <string.h>
using namespace myun2::burst;

struct app_context
{
	::std::vector<const char*> stylesheets;
	app_context() {
		stylesheets.push_back("reset.css");
	}
	const char* charset() const { return "UTF-8"; }
	const char* title() const { return ""; }

	void render_body(html_generator_base& r){
		r.tag("h1", "Hello World");
	}
};
int main(int argc, char *argv[])
{
	app_context app;

	if (argc > 1)
	{
		if ( strcmp(argv[1], "reset.css") == 0)
			css::reset(stdout).render();
	}
	else
		html_generator(stdout).render(app);

	return 0;
}
