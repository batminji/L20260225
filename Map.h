#pragma once
class Map
{
	int arr[10][10];

public:
	Map();
	int GetTile(int x, int y);
	void Render();
};

