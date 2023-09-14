#pragma once

class GameState
{
public:
	virtual ~GameState() = default;

	virtual void Enter() {}
	virtual bool Update(bool processInput = true) { return false; }
	virtual void ProcessInput() { }
	virtual void Draw() = 0;
	virtual void Exit() {}

};