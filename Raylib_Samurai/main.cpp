#include "main.hpp"

int main()
{ 
	InitWindow(800, 600, "Raylib Samurai Game");
	if(!IsWindowReady())
		return -1;


	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Welcome to Raylib Samurai Game!", 190, 280, 20, LIGHTGRAY);
		DrawText("Press ESC to exit", 300, 320, 20, LIGHTGRAY);
		EndDrawing();
	}
	
	CloseWindow();
	return 0;
}