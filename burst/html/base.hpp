#ifndef __MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__

#include "../generator.hpp"

namespace myun2
{
	namespace burst
	{
		struct html_generator_base : generator
		{
			html_generator_base() : generator(0){}
			html_generator_base(FILE* f_in) : generator(f_in){}

			void open_tag(const char* tag_name) {
				generate("<%s>", tag_name); }
			void start_tag(const char* tag_name) {
				open_tag(tag_name); }

			void open_tag(const char* tag_name, const char* attributes) {
				generate("<%s %s>", tag_name, attributes); }

			void close_tag(const char* tag_name) {
				generate("</%s>", tag_name); }
			void end_tag(const char* tag_name) {
				close_tag(tag_name); }

			void tag(const char* tag_name, const char* content) {
				generate("<%s>%s</%s>", tag_name, content, tag_name); }

			////////////////////////////////////////////

			void div_with_class(const char* class_name) {
				generate("<div class=\"%s\">", class_name); }
			void close_div() {
				generate("</div>"); }

			void start_container() {
				generate("<div class=\"container\">"); }
			void close_container() {
				generate("</div>"); }

			void start_a(const char* link_to) {
				generate("<a href=\"%s\">", link_to); }
			void close_a() {
				generate("</a>"); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__GENERATOR_BASE_HPP__
