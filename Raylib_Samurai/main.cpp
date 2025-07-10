#include "main.hpp"

int main()
{ 
	if (!samurai_core::WindowSettings())
		return -1;

	std::unique_ptr<samurai_core::op_texture> background = std::make_unique<samurai_core::op_texture>("Statics/background.jpg");
	
	background->get().width = 1280;
	background->get().height = 720;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);


		DrawTexture(background->get(), 0, 0, WHITE);

		EndDrawing();
	}

	
	samurai_core::End();
	return 0;
}