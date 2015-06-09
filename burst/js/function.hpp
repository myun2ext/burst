#ifndef __MYUN2_GITHUB_COM__BURST__JS__FUNCTION_HPP__
#define __MYUN2_GITHUB_COM__BURST__JS__FUNCTION_HPP__

namespace myun2
{
	namespace burst
	{
		namespace js
		{
			void print_function(const char* name, const char* params = "") {
				printf("function %s(%s){", name, params);
			}
			void print_close() { fputs("}", stdout); }

			void print_class(const char* name, const char* params = "") {
				printf("%s(%s);", name, params);
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__JS__FUNCTION_HPP__
