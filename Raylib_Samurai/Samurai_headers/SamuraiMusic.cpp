#include "SamuraiMusic.hpp"

samurai_core::op_music::op_music(const char* music_path)
{
	local_music = LoadMusicStream(music_path);
}
Music& samurai_core::op_music::get()
{
	return local_music;
}
samurai_core::op_music::~op_music()
{
	if (IsMusicStreamPlaying(local_music))
		StopMusicStream(local_music);

	UnloadMusicStream(local_music);
}