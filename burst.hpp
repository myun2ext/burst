#ifndef __MYUN2_GITHUB_COM__BURST_HPP__
#define __MYUN2_GITHUB_COM__BURST_HPP__

namespace myun2
{
	namespace burst
	{
		void print_open_tag(const char* tag_name) {
			printf("<%s>", tag_name); }
		void print_tag(const char* tag_name) { print_open_tag(tag_name); }
		void print_close_tag(const char* tag_name) {
			printf("</%s>", tag_name); }
	}
}

#endif//__MYUN2_GITHUB_COM__BURST_HPP__
