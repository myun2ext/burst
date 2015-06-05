#ifndef __MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__
#define __MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__

#include <stdio.h>
#include <string.h>
#include <string>

namespace myun2
{
	namespace burst
	{
		struct resource
		{
			::std::string _name;
			::std::string _id;
			::std::string filepath;
			FILE* fp;
			resource(const char* name) : _name(name){}
			resource(const char* name, const char* id) : _name(name), _id(id){}

			FILE* open(const char* mode = "r") {
				filepath = _name + "/" + _id;
				return fp = fopen(filepath.c_str(), mode);
			}
			FILE* open_w(){ return open("w"); }
			void create(const char* data) {
				open_w();
				fwrite(data, strlen(data), 1, fp);
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__
