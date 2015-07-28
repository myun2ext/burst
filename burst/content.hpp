#ifndef __MYUN2_GITHUB_COM__BURST__CONTENT_HPP__
#define __MYUN2_GITHUB_COM__BURST__CONTENT_HPP__

namespace myun2
{
	namespace burst
	{
		struct content_base
		{
			virtual const char* title() const { return "Application"; }
			virtual const char* charset() const { return "UTF-8"; }
			virtual const char* txtcolor() const { return "#111"; }
			virtual const char* bgcolor() const { return "#eee"; }
			virtual const char* font() const { return "'Hiragino Kaku Gothic ProN', Meiryo, sans-serif"; }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CONTENT_HPP__
