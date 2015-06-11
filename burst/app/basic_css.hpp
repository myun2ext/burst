#ifndef __MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__
#define __MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__

namespace myun2
{
	namespace burst
	{
		namespace app
		{
			struct basic_css : css::base
			{
				basic_css(FILE* f_in) : css::base(f_in){}
				void render()
				{
					/*  header */
					selector("header");
					background_color("#eee");
					close();

					/*  header container */
					selector("header .container");
					margin("0 auto");
					padding("5px 2%");
					close();

					/*  a */
					selector("a");
					text_color("#222");
					close();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__
