// Section 06 - Game with Key and Trap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "vld.h"
#include <iostream>
#include "Game.h"
#include "AudioManager.h"
//#include <time.h>
//#include <chrono>
//#include <thread>

using namespace std;
//using namespace std::this_thread;
//using namespace std::chrono;

//void PlayLevel(string level, int& width, int& height);

int main()
{
    /*int width = 0;
    int height = 0;

    PlayLevel("Level1.txt", width, height);
    PlayLevel("Level2.txt", width, height);*/

    Game myGame;

    if (myGame.Load())
    {
        while (!myGame.IsGameOver())
        {
            myGame.Run();
        }
        
        //PlayWinSound();
        if (myGame.DidUserQuit())
        {
            cout << "Thanks for playing!" << endl;
        }
        else if (myGame.GetPlayerLives() < 0)
        {
            cout << "YOU LOSE!" << endl;
            AudioManager::GetInstance()->PlayLoseSound();
        }
        else
        {
            cout << "YOU WIN" << endl;
            AudioManager::GetInstance()->PlayWinSound();
        }
    }
    else
    {
        cout << "Game did not load!";
    }
    AudioManager::DestroyInstance();

    return 0;
}

//void PlayLevel(string level, int& width, int& height)
//{
//    char* levelArray = LoadLevel(level, width, height);
//
//    int playerX = 1;
//    int playerY = 1;
//    bool anyWarnings = ConvertLevel(levelArray, width, height, playerX, playerY);
//    if (anyWarnings)
//    {
//        cout << "There were some warnings in the level data, see above." << endl;
//        system("pause");
//    }
//
//    bool playerHasKey = false;      
//    bool gameOver = false;
//    int health = 2;
//    
//    while (!gameOver)
//    {
//        system("cls");
//        DrawLevel(levelArray, width, height, playerX, playerY, playerHasKey);
//        cout << "Health: " << health << endl;
//        int gameInput = UpdatePlayerPostion(levelArray, playerX, playerY, width, playerHasKey);
//        switch (gameInput)
//        {
//            case 1:
//            {
//                gameOver = true;
//                system("cls");
//                DrawLevel(levelArray, width, height, playerX, playerY, playerHasKey);
//                cout << "YOU WON!" << endl;
//                PlayWinSound();
//                break;
//            }
//                
//            case 2:
//            {
//                system("cls");
//                DrawLevel(levelArray, width, height, playerX, playerY, playerHasKey);
//                exit(0);
//                
//            }
//                              
//            default:
//            {
//                break;
//            }               
//        }
//        
//    }
//    
//    
//
//    delete[] levelArray;
//}
//
