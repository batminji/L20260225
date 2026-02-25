#include "Map.h"
#include <iostream>

Map::Map()
{
    int temp[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 9, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    for (int y = 0; y < 10; ++y)
    {
        for (int x = 0; x < 10; ++x)
        {
            Data[y][x] = temp[y][x];
        } 
    }  
}

void Map::Render(int PlayerX, int PlayerY)
{
    for (int y = 0; y < 10; ++y) 
    {
        for (int x = 0; x < 10; ++x) 
        {
            if (x == PlayerX && y == PlayerY)
            {
                std::cout << "% ";
            }
            else if (Data[y][x] == 1)
            {
                std::cout << "# ";
            }
            else if (Data[y][x] == 9)
            {
                std::cout << "@ ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}

int Map::GetTile(int X, int Y)
{
    return Data[Y][X];
}
