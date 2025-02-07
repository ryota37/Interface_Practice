#pragma once

# include <Siv3D.hpp>
# include <memory>

class GameStateInterface
{
public:
	virtual ~GameStateInterface() {};
	virtual void enter() = 0;
	virtual void exec() = 0;
	virtual void exit() = 0;
};

class BeforePlaying : public GameStateInterface
{
public:
	void enter() override;
	void exec() override;
	void exit() override;
};

class Playing : public GameStateInterface
{
public:
	void enter() override;
	void exec() override;
	void exit() override;
};

class GameOver : public GameStateInterface
{
public:
	void enter() override;
	void exec() override;
	void exit() override;
};

class GameStateManager
{
public:
	void setState(std::shared_ptr<GameStateInterface>state);
	void exec();
private:
	std::shared_ptr<GameStateInterface> currentState;
};
