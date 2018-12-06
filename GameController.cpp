#include "GameController.h"

gamelvl* GameController::currentlvl;
bool GameController::Loading;

void GameController::Init()
{
	Loading = true;
	currentlvl = 0;
}

void GameController::LoadInitialLevel(gamelvl* lev)
{
	Loading = true;
	currentlvl = lev;
	currentlvl->Load();
	Loading = false;
}
void GameController::SwitchLevel(gamelvl* lev)
{
	Loading = true;
	currentlvl->UnLoad();
	lev->Load();
	delete currentlvl;
	currentlvl = lev;
	Loading = false;
}

void GameController::Render()
{
	if(Loading) return;
	currentlvl->Render();
}

void GameController::Update()
{
	currentlvl->Update();
}
