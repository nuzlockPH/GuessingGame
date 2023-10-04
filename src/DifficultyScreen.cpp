#include "DifficultyScreen.hpp"
#include "Colors.hpp"
#include "Fonts.hpp"
#include "Event.hpp"
#include "Logic.hpp"

DifficultyScreen::DifficultyScreen() {}

DifficultyScreen::~DifficultyScreen() {}

DifficultyScreen::DifficultyScreen(float width, float height) : _width(width), _height(height)
{
	_setupBox();
	_setupText();
	_setupButtons();
}

void DifficultyScreen::draw()
{
	_box->draw();
	_text->draw();
	for (auto &button : _buttons)
	{
		button->draw();
	}
	al_flip_display();
}

bool DifficultyScreen::contains(float x, float y)
{
	Event& event=Event::getInstance();
	for (auto &button : _buttons)
	{
		if (button->contains(x, y))
		{
			std::string label = button->getLabel();
			if (label == "EASY")
				event.emitEvent(STARTSCREEN,DIFFICULTYSCREEN,EASY);
			else if (label == "MEDIUM")
				event.emitEvent(STARTSCREEN,DIFFICULTYSCREEN,MEDIUM);
			else if (label == "HARD")
				event.emitEvent(STARTSCREEN,DIFFICULTYSCREEN,HARD);
			else
				event.emitEvent(STARTSCREEN,DIFFICULTYSCREEN,EASY);
			return true;
		}
	}
	return false;
}

void DifficultyScreen::_setupBox()
{
	float heightProportion = 0.2;
	float width = _width;
	float height = _height * heightProportion;
	float x = 0;
	float y = height;
	_box = new Box(x, y, width, height, BOXCOLOR);
}

void DifficultyScreen::_setupText()
{
	int margin = 30;
	std::string text = "Select Difficulty";
	Fonts &font = Fonts::getInstance();
	float x = _box->getX() + (_box->getWidth() / 2);
	float y = _box->getY() + margin;
	_text = new Text(font.dancingScriptFont, TEXTCOLOR, x, y, text);
}

void DifficultyScreen::_setupButtons()
{
	std::vector<std::string> label = {"EASY", "MEDIUM", "HARD"};
	float heightProportion = 0.4;
	int margin = 30;
	float width = (_box->getWidth() / label.size()) - margin;
	float height = heightProportion * width;

	float x = 0 + (margin / 2);
	float y = _box->getY() + (_box->getHeight() / 2);
	for (int i = 0; i < label.size(); i++)
	{
		Button *button = new Button(x, y, width, height, BGCOLOR, label[i]);
		_buttons.push_back(button);
		x += width + margin;
	}
}