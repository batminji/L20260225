#include "GameEngine.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

GameEngine::GameEngine() : bIsGameOver(false)
{
	
}

void GameEngine::Run()
{
    Render();

    while (!bIsGameOver) 
    {
        Input();
        Process();
        Render();
    }

}

void GameEngine::Input()
{
    int key = _getch();
    // 추후 예외 처리 필요
    MyPlayer.Move(key, MyMap);
}

void GameEngine::Process()
{
    if (MyMap.GetTile(MyPlayer.GetX(), MyPlayer.GetY()) == 9) 
    {
        bIsGameOver = true;
    }
}

void GameEngine::Render()
{
    system("cls");
    MyMap.Render(MyPlayer.GetX(), MyPlayer.GetY());

    if (bIsGameOver)
    {
        std::cout << "탈출 성공! 게임을 종료합니다." << std::endl;
    }
}
