#ifndef __MYUN2_GITHUB_COM__BURST__APP_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP_HPP__

namespace myun2
{
	namespace burst
	{
		struct application_base
		{
			virtual const char* bgcolor() const { return "#eee"; }
			virtual const char* title() const { return "Application"; }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP_HPP__
