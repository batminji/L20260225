#pragma once
#include "Map.h"
#include "Player.h"

class GameEngine
{
	Map MyMap;
	Player MyPlayer;

	bool bIsGameOver;
public:
	GameEngine();
	void Run();

private:
	void Input();
	void Process();
	void Render();
};

