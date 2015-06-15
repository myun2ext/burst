#include "burst/html.hpp"
//#include "burst/app.hpp"
using namespace myun2::burst;

/*
struct example_application : application_base
{
	const char* title() const { return "Example Application"; }
	void render_content(html_generator_base& r) {
		r.tag("p", "This is example application.");
	}
};
*/
int main(int argc, char *argv[])
{
	//example_application().render(argv[1]);
	html_generator<5> h;
	h.render();
	return 0;
}
