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
					/*  all */
					selector("*");
					font_family("'Hiragino Kaku Gothic ProN', Meiryo, sans-serif");
					close();

					/*  header */
					selector("body");
					background_color("#333");
					close();

					/*  header */
					selector("header");
					background_color("#eee");
					close();

					/*  header container */
					selector("header .container");
					margin("0 auto");
					padding("5px 3%");
					close();

					/*  header h1 */
					selector("header h1");
					font_size("1.7em");
					close();

					/*  a */
					selector("a");
					text_color("#222");
					close();

					/*  main container */
					selector(".main-container");
					margin("20px auto");
					width("90%");
					height("120px");
					padding("5px 2%");
					background_color("white");

					border_radius("6px");
					shadow();
					close();
				}
			};
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__APP__BASIC_CSS_HPP__
