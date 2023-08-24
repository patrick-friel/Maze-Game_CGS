// Section 06 - Game with Key and Trap.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Game.h"
#include "AudioManager.h"
#include "StateMachineExampleGame.h"

using namespace std;

int main()
{    
    Game myGame;

    StateMachineExampleGame gameStateMachine(&myGame);

    myGame.Initialize(&gameStateMachine);
    myGame.RunGameLoop();
    myGame.Deinitialize();
    
    AudioManager::DestroyInstance();

    return 0;
}
