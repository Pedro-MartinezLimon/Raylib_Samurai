#include "SamuraiSound.hpp"


samurai_core::op_sound::op_sound(const char* sound_path)
{
	LoadSound(sound_path);
}
Sound& samurai_core::op_sound::get()
{
	return local_sound;
}
samurai_core::op_sound::~op_sound()
{
	if (IsSoundPlaying(local_sound))
		StopSound(local_sound);

	UnloadSound(local_sound);
}