#pragma once

#include <raylib.h>

namespace samurai_core
{
	class op_texture
	{
	private:
		Texture2D local_texture;
	public:
		op_texture(const char * texture_path);

		Texture2D& get();

		~op_texture();
	};
}