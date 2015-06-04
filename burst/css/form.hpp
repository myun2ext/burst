#ifndef __MYUN2_GITHUB_COM__BURST__CSS__FORM_HPP__
#define __MYUN2_GITHUB_COM__BURST__CSS__FORM_HPP__

namespace myun2
{
	namespace burst
	{
		namespace css
		{
			template <typename _App>
			void render_form_styles(const _App& app)
			{
				print_selector("form");
				print_width("300px");
				print_padding("11px");
				print_border_radius("10px");
				print_background_color("#eee");
				print_close();

				print_selector("label");
				print_float_left();
				print_width("42%");
				print_close();

				print_selector("input[type=text]");
				print_width("50%");
				print_close();
			}
		}
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__CSS__FORM_HPP__
