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

			FILE* open(const char* mode = "r", const char* ext="txt") {
				filepath = _name + "/" + _id + "." + ext;
				return fp = fopen(filepath.c_str(), mode);
			}
			FILE* open_w(const char* ext="txt"){ return open("w", ext); }
			void create(const char* ext, const char* data) {
				open_w(ext);
				fwrite(data, strlen(data), 1, fp);
				fclose(fp);
			}
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__RESOURCE_HPP__
