# include <Siv3D.hpp> 
# include "GameState.h"

void Main()
{
	GameStateManager game;
	while (System::Update())
	{
		game.setState(std::make_shared<BeforePlaying>());
		game.exec();

		game.setState(std::make_shared<Playing>());
		game.exec();

		game.setState(std::make_shared<GameOver>());
		game.exec();
	}
}
