#pragma once

#include "Graphics.h"
#include"Spritesheet.h"

class gamelvl
{
protected:
	static Graphics* gfx;

public:
	static void Init(Graphics* graphics)
	{
		gfx = graphics;
	}

	virtual void Load() = 0;
	virtual void UnLoad() = 0;
	virtual void Render() = 0;
	virtual void Update() = 0;
};
