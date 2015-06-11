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

			void start() {
				html::doctype_generator<5>(f).generate();
				start_tag("html");
			}
			template <typename _Context>
			void render(_Context& context)
			{
				start();
				html::head_renderer(f).generate(context);
				start_body();
				context.render_body(*this);
				end_body();
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
