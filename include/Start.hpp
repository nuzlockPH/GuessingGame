#include "Initialize.hpp"
#include "Display.hpp"
#include "Event.hpp"
#include "Screen.hpp"
#include "StartScreen.hpp"
#include "GameScreen.hpp"
#include "RetryScreen.hpp"
#include "DifficultyScreen.hpp"

class Start{
	Initialize _initialize;
	Display _display;
	StartScreen* _startScreen;
	GameScreen* _gameScreen;
	Screen* _currentScreen;
	RetryScreen* _retryScreen;
	DifficultyScreen* _difficultyScreen;
	void _gameLoop();
	void _init();
	public:
	Start();
	void clear();
	void run();
};