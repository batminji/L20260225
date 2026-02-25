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
		{1, 0, 0, 0, 0, 0, 0, 0, 9, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	int PlayerX = 1;
	int PlayerY = 1;

	// Render
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
			else if (Map[Y][X] == 9)
			{
				std::cout << "@ ";
			}
		}
		std::cout << '\n';
	}

	// GameLoop
	// Frame : 한 사이클
	while (true) {
		// Input
		int Input = 0;
		Input = _getch();

		// Process
		if (Input == 'W' || Input == 'w' || Input == 72)
		{
			--PlayerY;
			if (Map[PlayerY][PlayerX] == 1)
			{
				++PlayerY;
			}
		}
		if (Input == 'S' || Input == 's' || Input == 80)
		{
			++PlayerY;
			if (Map[PlayerY][PlayerX] == 1)
			{
				--PlayerY;
			}
		}
		if (Input == 'A' || Input == 'a' || Input == 75)
		{
			--PlayerX;
			if (Map[PlayerY][PlayerX] == 1)
			{
				++PlayerX;
			}
		}
		if (Input == 'D' || Input == 'd' || Input == 77)
		{
			++PlayerX;
			if (Map[PlayerY][PlayerX] == 1)
			{
				--PlayerX;
			}
		}
		system("cls");

		// Render
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
				else if (Map[Y][X] == 9)
				{
					std::cout << "@ ";
				}
			}
			std::cout << '\n';
		}

		// std::cout << Input << std::endl;

		// 도착했는지 확인
		if (Map[PlayerY][PlayerX] == 9)
		{
			std::cout << "탈출 성공!" << std::endl;
			return 0;
		}
	}

	return 0;
}