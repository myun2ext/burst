#ifndef __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__

namespace myun2
{
	namespace burst
	{
		namespace app
		{
			namespace html
			{
				using ::myun2::burst::html::tag_generator;
				struct header : tag_generator
				{
					header() : tag_generator("header"){}
				};
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__HEADER_HPP__
