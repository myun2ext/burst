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

			void print_text_input(const char* column_name) {
				printf("<input type=\"text\" name=\"%s\">", column_name); }

			void print_submit(const char* name) {
				printf("<input type=\"submit\">", name); }
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__HTML__FORM_HPP__
