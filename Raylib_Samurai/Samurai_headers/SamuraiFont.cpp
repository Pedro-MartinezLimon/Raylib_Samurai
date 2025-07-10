#include "SamuraiFont.hpp"

samurai_core::op_font::op_font(const char* font_path)
{
	local_font = LoadFont(font_path);
}
Font& samurai_core::op_font::get()
{
	return local_font;
}
samurai_core::op_font::~op_font()
{
	UnloadFont(local_font);
}