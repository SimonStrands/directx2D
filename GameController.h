#pragma once

#include "gamelvl.h"

class GameController
{
	GameController(){ }
	static gamelvl* currentlvl;
public:
	static bool Loading;

	static void Init();

	static void LoadInitialLevel(gamelvl* lev);
	static void SwitchLevel(gamelvl* lev);

	static void Render();
	static void Update();
};
