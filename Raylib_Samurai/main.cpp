#include "main.hpp"

int main()
{ 
	if (!samurai_core::WindowSettings())
		return -1;

	
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);

		DrawFPS(10, 10);


		EndDrawing();
	}

	
	samurai_core::End();
	return 0;
}