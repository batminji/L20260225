#include <iostream>
#include <conio.h>

int main()
{
	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	int PlayerX = 1;
	int PlayerY = 1;

	while (true) {
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					std::cout << "% ";
				}
				else if (Map[Y][X] == 1)
				{
					std::cout << "# ";
				}
				else if (Map[Y][X] == 0)
				{
					std::cout << "  ";
				}
			}
			std::cout << '\n';
		}
		int Temp = 0;
		Temp = _getch();
		if (Temp == 'W' || Temp == 'w')
		{
			--PlayerY;
			if (Map[PlayerY][PlayerX] == 1)
			{
				++PlayerY;
			}
		}
		else if (Temp == 'S' || Temp == 's')
		{
			++PlayerY;
			if (Map[PlayerY][PlayerX] == 1)
			{
				--PlayerY;
			}
		}
		else if (Temp == 'A' || Temp == 'a')
		{
			--PlayerX;
			if (Map[PlayerY][PlayerX] == 1)
			{
				++PlayerX;
			}
		}
		else if (Temp == 'D' || Temp == 'd')
		{
			++PlayerX;
			if (Map[PlayerY][PlayerX] == 1)
			{
				--PlayerX;
			}
		}
		else if (Temp == 'Q' || Temp == 'q')
		{
			return 0;
		}
		system("cls");
	}

	return 0;
}