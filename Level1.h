#pragma once

#include "gamelvl.h"
#include "Graphics.h"

class Level1: public gamelvl
{
	float y;
	float yspeed;

	SpriteSheet* sprites;

	int frame;

public:
	void Load() override;
	void Render() override;
	void Update() override;
	void UnLoad() override;
};
