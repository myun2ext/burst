# Burst

Fast C++ Web Generator.

* CSS
* HTML

# How to (Simply)

Example for

```cpp
#include <stdio.h>
#include "burst/html.hpp"
#include "burst/html/doctype.hpp"

int main()
{
	myun2::burst::html_generator h(stdout);
	h.start();
	h.tag("h1", "Hello World");
	return 0;
}
```

Generate this HTML.

```html
<!DOCTYPE html><html><h1>Hello World</h1></html>
```

# Basicaly

```cpp
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
```

generated

```html
<!DOCTYPE html><html><head><meta charset="UTF-8"><title></title></head><body><h1>Hello World</h1></body></html>
```
