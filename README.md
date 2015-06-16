# Burst

Fast C++ Web Generator.

* CSS
* HTML

# Hello World example code

Example for

```cpp
#include "burst/html.hpp"
using namespace myun2::burst;

struct my_document : html_generator<5>
{
	void render_body_content() {
		tag("h1", "Hello World");
	}
};

int main(int argc, char *argv[])
{
	my_document().render();
	return 0;
}
```

Generate this HTML.

```html
<!DOCTYPE html><html><head><meta charset="UTF-8"><title></title></head><body><h1>Hello World</h1></body></html>
```
