#include "SamuraiTexture.hpp"


samurai_core::op_texture::op_texture(const char * texture_path)
{
	local_texture = LoadTexture(texture_path);
}
Texture2D& samurai_core::op_texture::get()
{
	return local_texture;
}
samurai_core::op_texture::~op_texture()
{
	UnloadTexture(local_texture);
}