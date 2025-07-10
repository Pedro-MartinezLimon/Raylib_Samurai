#pragma once

#include <raylib.h>

namespace samurai_core
{
	class op_font
	{
	private:
		Font local_font;
	public:
		op_font(const char* font_path);

		Font& get();

		~op_font();
	};
}