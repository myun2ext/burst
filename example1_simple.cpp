#include "burst/app.hpp"
#include "burst/html.hpp"
using namespace myun2::burst;

struct example_application : application_base
{
	example_application() {
		stylesheets.push_back("application.css");
	}
	const char* title() const { return "Example Application"; }
	/*void render_header(FILE* f) {
	}*/
};

int main(int argc, char *argv[])
{
	example_application().render(argv[1]);
	return 0;
}
