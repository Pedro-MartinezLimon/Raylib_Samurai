#pragma once

#include <raylib.h>

namespace samurai_core
{
	class op_music
	{
	private:
		Music local_music;
	public:
		op_music(const char* music_path);

		Music& get();

		~op_music();
	};
}