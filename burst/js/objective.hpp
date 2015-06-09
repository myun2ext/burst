#ifndef __MYUN2_GITHUB_COM__BURST__JS__OBJECTIVE_HPP__
#define __MYUN2_GITHUB_COM__BURST__JS__OBJECTIVE_HPP__

namespace myun2
{
	namespace burst
	{
		namespace js
		{
			void print_class(const char* name, const char* params = "") {
				printf("function %s(%s){", name, params);
			}
			void print_method(const char* class_name, const char* method_name, const char* params = "") {
				printf("%s.prototype.%s = function %s(%s){", class_name, method_name, params);
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__JS__OBJECTIVE_HPP__
