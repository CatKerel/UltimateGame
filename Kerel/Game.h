#pragma once
#include <vector>
#include "Engine/SystemClass.h"
#include "PlayerController.h"

class Game
{
public:
	Game();

	bool Initialize();
	void Shutdown();

private:
	SystemClass* System;
	vector <Object*> Object;
};