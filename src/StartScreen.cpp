#include "StartScreen.hpp"
#include "Colors.hpp"
#include "Errors.hpp"
#include "Event.hpp"
#include <iostream>

StartScreen::StartScreen() {}

StartScreen::StartScreen(float width, float height) : _width(width), _height(height)
{
	Button *startBtn;
	Button *settingsBtn;
	addButton(startBtn, "START");
	addButton(settingsBtn, "DIFFICULTY");
}

StartScreen::~StartScreen()
{
	for (auto &button : _buttons)
		delete[] button;
}

void StartScreen::addButton(Button *&button, std::string label)
{
	int numButtons = _buttons.size() + 1;
	int margin = 50;
	float widthProportion = 0.6;
	float heightProportion = 0.3;
	float buttonWidth = widthProportion * _width;
	float buttonHeight = heightProportion * buttonWidth;
	float x = (_width - buttonWidth) / 2;
	float y = (((_height / 2) + (numButtons * (buttonHeight + margin))) / 2) + (margin * numButtons);
	button = new Button(x, y, buttonWidth, buttonHeight, BOXCOLOR, label);
	_buttons.push_back(button);
}

bool StartScreen::contains(float x, float y)
{
	for (auto &button : _buttons)
	{
		if (button->contains(x, y))
		{
			button->setClicked(true);
			Event &event = Event::getInstance();
			std::string label = button->getLabel();
			if (label == START)
			{
				int toScreen = GAMESCREEN;
				event.emitEvent(toScreen);
			}
			else if(label == DIFFICULTY) event.emitEvent(DIFFICULTYSCREEN);
			return true;
		}
	}
	return false;
}

void StartScreen::draw()
{
	for (auto &button : _buttons)
	{
		if (button == NULL)
			throw NullError("_buttons:button has a value NULL");
		button->draw();
	}
	al_flip_display();
}
