#include <iostream>
#include "Start.hpp"
#include "Colors.hpp"
#include "Errors.hpp"
#include "Fonts.hpp"
Start::Start() : _startScreen(NULL)
{
}

void Start::_init()
{
	_startScreen = new StartScreen(_display.getWidth(), _display.getHeight());
	_gameScreen = new GameScreen(_display.getWidth(), _display.getHeight());
	_retryScreen = new RetryScreen(_display.getWidth(), _display.getHeight(), "SAMPLE");
	_difficultyScreen = new DifficultyScreen(_display.getWidth(), _display.getHeight());

	_currentScreen = _startScreen;
}

void Start::clear()
{
	al_clear_to_color(BGCOLOR);
}

void Start::run()
{
	_init();
	clear();
	_currentScreen->draw();
	_gameLoop();
}

void Start::_gameLoop()
{
	Event &_event = Event::getInstance();
	_event.registerEvent(al_get_touch_input_event_source());
	bool running = true;
	while (running)
	{
		ALLEGRO_EVENT event;
		al_wait_for_event(_event.getQueue(), &event);
		if (event.type == ALLEGRO_EVENT_TOUCH_BEGIN)
		{
			float x = event.touch.x;
			float y = event.touch.y;
			if (_currentScreen->contains(x, y))
			{
				_currentScreen->draw();
			}
		}
		else if (event.type == SCREEN_EVENT)
		{
			Event::data *data = reinterpret_cast<Event::data *>(event.user.data1);
			if (data->toScreen == GAMESCREEN)
			{
				int fromScreen = data->fromScreen;
				if (fromScreen == RETRYSCREEN)
				{
					_gameScreen->reset();
					data->fromScreen = -1;
				}
				_currentScreen = _gameScreen;
			}
			else if (data->toScreen == STARTSCREEN)
			{
				int fromScreen=data->fromScreen;
				if(fromScreen==DIFFICULTYSCREEN){
				_gameScreen->setDifficulty(data->difficulty);
			 	//_gameScreen->reset();	
				}
				_currentScreen = _startScreen;
			}
			else if (data->toScreen == RETRYSCREEN)
			{
				_retryScreen->setText(data->msg);
				_currentScreen = _retryScreen;
			}
			else if (data->toScreen == DIFFICULTYSCREEN)
				_currentScreen = _difficultyScreen;
			else
			{
				_currentScreen = _startScreen;
			}
			al_set_target_backbuffer(_display.getDisplay());
			clear();
			_currentScreen->draw();
		}
	}
}