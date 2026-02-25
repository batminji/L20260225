#include "Player.h"
#include "Map.h"

Player::Player()
{
	X = 1;
	Y = 1;
}

Player::Player(int X, int Y)
{
	if (X < 0 || X >= 10 || Y < 0 || Y >= 10)
	{
		X = 1;
		Y = 1;
	}
	else
	{
		X = X;
		Y = Y;
	}
}

void Player::Move(int Input, Map& Map)
{
	if (Input == 'W' || Input == 'w' || Input == 72)
	{
		--Y;
		if (Map.GetTile(X, Y) == 1)
		{
			++Y;
		}
	}
	if (Input == 'S' || Input == 's' || Input == 80)
	{
		++Y;
		if (Map.GetTile(X, Y) == 1)
		{
			--Y;
		}
	}
	if (Input == 'A' || Input == 'a' || Input == 75)
	{
		--X;
		if (Map.GetTile(X, Y) == 1)
		{
			++X;
		}
	}
	if (Input == 'D' || Input == 'd' || Input == 77)
	{
		++X;
		if (Map.GetTile(X, Y) == 1)
		{
			--X;
		}
	}
}

int Player::GetX() const
{
	return X;
}

int Player::GetY() const
{
	return Y;
}
