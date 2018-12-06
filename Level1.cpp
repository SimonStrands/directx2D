#include "GameController.h"
#include "Graphics.h"
#include "Level1.h"


void Level1::Load()
{
	sprites = new SpriteSheet(L"test.png", gfx);
}

void Level1::UnLoad(){
	//delete sprites;
}

void Level1::Update()
{
	
	y += yspeed;
	if (y >= 600)
	{
		y = 600;
		yspeed = -3.12f;
	}
	if (y <= 0)
	{
		y = 1;
		yspeed = 7.8f;
	}
	frame++;
}
void Level1::Render()
{
	gfx->ClearScreen(0.0f, 0.0f, 0.5f);
	gfx->DrawCircle(350.0f, y, 50.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	//sprites->Draw(frame % 4, 100, 100);
}
