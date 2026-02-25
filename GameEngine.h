#pragma once
#include "Map.h"
#include "Player.h"

class GameEngine
{
	Map map;
	Player player;

public:
	GameEngine();
	void Run();
	~GameEngine();

private:
	void Input();
	void Process();
	void Render();
};

