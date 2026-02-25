#pragma once
class Map;

class Player
{
	int X;
	int Y;
public:
	Player();
	Player(int X, int Y);
	void Move(int Input, Map& Map);
	int GetX() const;
	int GetY() const;
};

