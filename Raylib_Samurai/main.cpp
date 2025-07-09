#include "main.hpp"

int main()
{ 
	sam_core::SetWindowConfig();
	sam_core::SetAudioConfig();


	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(WHITE);

		EndDrawing();
	}

	sam_core::CloseProperly();

	return 0;
}