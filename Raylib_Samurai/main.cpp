#include "main.hpp"

int main()
{ 
	if (!samurai_core::WindowSettings())
		return -1;

	
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);



		EndDrawing();
	}

	
	samurai_core::End();
	return 0;
}