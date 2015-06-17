#ifndef __MYUN2_GITHUB_COM__BURST__CSS__RESET_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__RESET_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			struct reset : base
			{
				reset(FILE* f_in) : base(f_in){}
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

#endif//__MYUN2_GITHUB_COM__BURST__CSS__RESET_HPP__
