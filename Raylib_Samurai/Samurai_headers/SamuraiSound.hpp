#pragma once

#include <raylib.h>

namespace samurai_core
{
	class op_sound
	{
	private:
		Sound local_sound;
	public:
		op_sound(const char* sound_path);

		Sound& get();

		~op_sound();
	};
}