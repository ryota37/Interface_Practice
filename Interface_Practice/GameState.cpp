# include <Siv3D.hpp>
# include "GameState.h"

// BeforePlaying
void BeforePlaying::enter()
{
	// Initialization

	Print << U"Enter BeforePlaying";
}
void BeforePlaying::exec()
{
	Print << U"BeforePlaying";
}
void BeforePlaying::exit()
{
	// Discard objects

	Print << U"Exit BeforePlaying";
}

// Playing
void Playing::enter()
{
	// Initialization

	Print << U"Enter Playing";
}
void Playing::exec()
{
	Print << U"Playing";
}
void Playing::exit()
{
	// Discard objects

	Print << U"Exit Playing";
}

// GameOver
void GameOver::enter()
{
	// Initialization

	Print << U"Enter GameOver";
}
void GameOver::exec()
{
	Print << U"GameOver";
}
void GameOver::exit()
{
	// Discard objects

	Print << U"Exit GameOver";
}

// GameStateManager
void GameStateManager::setState(std::shared_ptr<GameStateInterface>state)
{
	if (currentState) currentState->exit();
	currentState = state;
	if (currentState) currentState->enter();
}
void GameStateManager::exec()
{
	if (currentState) currentState->exec();
}
