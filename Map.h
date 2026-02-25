#pragma once
class Map
{
	int Data[10][10];

public:
	Map();
	void Render(int PlayerX, int PlayerY);
	int GetTile(int X, int Y) const;
};

