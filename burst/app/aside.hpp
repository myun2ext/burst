#ifndef __MYUN2_GITHUB_COM__BURST__APP__ASIDE_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__ASIDE_HPP__

namespace myun2
{
	namespace burst
	{
		namespace app
		{
			namespace html
			{
				using ::myun2::burst::html::tag_generator;
				struct aside : tag_generator
				{
					aside() : tag_generator("aside"){}
				};
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__ASIDE_HPP__
