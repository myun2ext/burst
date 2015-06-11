#ifndef __MYUN2_GITHUB_COM__BURST__HTML_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML_HPP__

#include "generator.hpp"


namespace myun2
{
	namespace burst
	{
		struct html_generator_base : generator
		{
			html_generator_base(FILE* f_in) : generator(f_in){}

			void open_tag(const char* tag_name) {
				generate("<%s>", tag_name); }
			void start_tag(const char* tag_name) {
				open_tag(tag_name); }

			void close_tag(const char* tag_name) {
				generate("</%s>", tag_name); }
			void end_tag(const char* tag_name) {
				close_tag(tag_name); }

			void tag(const char* tag_name, const char* content) {
				generate("<%s>%s</%s>", tag_name, content, tag_name); }
		};
	}
}

#include "html/head.hpp"
#include "html/doctype.hpp"

namespace myun2
{
	namespace burst
	{
		struct html_generator : html_generator_base
		{
			html_generator(FILE* f_in) : html_generator_base(f_in){}
			const html::head& get_head() { static html::head h; return h; }

			void start() {
				html::doctype_generator<5>(f).generate();
				start_tag("html");
			}
			void render_head() {
				html::head_renderer h(f, get_head());
				h.generate();
			}
			void end() {
				end_tag("html");
			}
			void start_body() { start_tag("body"); }
			void end_body() { end_tag("body"); }

			virtual ~html_generator() { end(); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML_HPP__
