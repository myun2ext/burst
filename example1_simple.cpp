#include "burst/app.hpp"
using namespace myun2::burst;

struct my_app : application_base
{
	void render_body_content() {
	//	tag("h1", "Hello World");
	}
};

int main(int argc, char *argv[])
{
	my_app().render("");
	return 0;
}
