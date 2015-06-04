#ifndef __MYUN2_GITHUB_COM__BURST__HTML__FORM_HPP__
#define __MYUN2_GITHUB_COM__BURST__HTML__FORM_HPP__

namespace myun2
{
	namespace burst
	{
		namespace html
		{
			void print_form(const char* url) {
				printf("<form action=\"%s\" method=\"POST\">", url); }

			void print_label(const char* column_name, const char* text) {
				printf("<label for=\"%s\">%s</label>", column_name, text); }

			void print_text_input(const char* column_name, const char* default_input="") {
				printf("<input type=\"text\" name=\"%s\" value=\"%s\"></input>", column_name, default_input); }

			void print_label_with_text_input(const char* column_name, const char* label, const char* default_input="") {
				print_label(column_name, label);
				print_text_input(column_name, default_input); }

			void print_submit(const char* name) {
				printf("<input type=\"submit\">", name); }
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__FORM_HPP__
