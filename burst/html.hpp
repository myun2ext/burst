#ifndef __MYUN2_GITHUB_COM__BURST__HTML_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML_HPP__

#include "generator.hpp"
#include "html/doctype.hpp"

namespace myun2
{
	namespace burst
	{
		struct html_generator : generator
		{
			html_generator(FILE* f_in) : generator(f_in){}
			void start_tag(const char* tag_name) {
				generate("<%s>", tag_name); }
			void close_tag(const char* tag_name) {
				generate("</%s>", tag_name); }
			void end_tag(const char* tag_name) {
				generate("</%s>", tag_name); }
			void tag(const char* tag_name, const char* content) {
				generate("<%s>%s</%s>", tag_name, content, tag_name); }

			void start() {
				html::doctype_generator<5>(f).generate();
				start_tag("html");
			}
			void end() {
				end_tag("html");
			}
			virtual ~html_generator() { end(); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
