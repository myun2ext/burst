#ifndef __MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__
#define __MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__

#include <string>

namespace myun2
{
	namespace burst
	{
		struct resource
		{
			::std::string _name;
			::std::string _id;
			resource(const char* name) : _name(name){}
			resource(const char* name, const char* id) : _name(name), _id(id){}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__
