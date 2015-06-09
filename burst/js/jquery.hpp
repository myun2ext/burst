#ifndef __MYUN2_GITHUB_COM__BURST__JS__JQUERY_HPP__
#define __MYUN2_GITHUB_COM__BURST__JS__JQUERY_HPP__

namespace myun2
{
	namespace burst
	{
		namespace js
		{
			void print_jq_ready() {
				printf("$(function %s(%s){", name, params);
			}
			void print_jq_ready_close() { fputs("});", stdout); }

			void print_jq(const char* selector, const char* action, const char* value="") {
				printf("$(\"%s\").%s(%s);", selector, action, value);
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__JS__JQUERY_HPP__
