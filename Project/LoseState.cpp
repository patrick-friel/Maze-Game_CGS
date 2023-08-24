#include "LoseState.h"
#include <iostream>
#include <conio.h>

#include "StateMachineExampleGame.h"

using namespace std;

LoseState::LoseState(StateMachineExampleGame* pOwner)
	: m_pOwner(pOwner)
{

}

bool LoseState::Update(bool processInput)
{
	if (processInput)
	{
		int input = _getch();
		m_pOwner->LoadScene(StateMachineExampleGame::SceneName::MainMenu);
	}
	return false;
}

void LoseState::Draw()
{
	system("cls");
	cout << endl << endl << endl;
	cout << "        - - - GAME OVER - - -" << endl;
	cout << "        - - - Better luck next time - - -" << endl;
	cout << "        - - - Press any key to go back to main menu - - -" << endl;
}