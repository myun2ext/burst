#ifndef __MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__

namespace myun2
{
	namespace burst
	{
		namespace app
		{
			struct basic_css : box
			{
				basic_css(FILE* f_in) : box(f_in){}
				void render()
				{
					selector("*");
					padding("0");
					margin("0");
					close();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__
