#include "burst/html.hpp"
#include <vector>
using namespace myun2::burst;

struct app_context
{
	::std::vector<const char*> stylesheets;
	const char* charset() const { return "UTF-8"; }
	const char* title() const { return ""; }

	void render_body(html_generator_base& r){
		r.tag("h1", "Hello World");
	}
};
int main() {
	app_context c;
	html_generator(stdout).render(c);
	return 0;
}
