#include "RetryScreen.hpp"
#include "Colors.hpp"
#include "Fonts.hpp"
#include "Event.hpp"
#include <iostream>
RetryScreen::RetryScreen() {}
RetryScreen::~RetryScreen() {}

RetryScreen::RetryScreen(float width, float height, std::string msg) : _width(width), _height(height), _msg(msg)
{
	/*Button *btnNewGame = new Button();
	Button *btnMainMenu = new Button();
	_buttons.push_back(btnNewGame);
	_buttons.push_back(btnMainMenu);*/
	_createBox();
	_createText();
	_createButtons();
}

void RetryScreen::setText(std::string msg)
{
	_text->setText(msg);
}

void RetryScreen::draw()
{
	_box->draw();
	_text->draw();
	for (auto &button : _buttons)
	{
		button->draw();
	}
	al_flip_display();
}

bool RetryScreen::contains(float x, float y)
{
	
	for (auto &button : _buttons)
	{
		if (button->contains(x, y))
		{
			Event &event = Event::getInstance();
			button->setClicked(true);
			std::string label = button->getLabel();
			if (label == MAINMENU)
			{
				event.emitEvent(STARTSCREEN,RETRYSCREEN);
			}
			else if (label == NEWGAME)
			{
				event.emitEvent(GAMESCREEN,RETRYSCREEN);
			}
			return true;
		}
	}
	return false;
}

void RetryScreen::_createBox()
{
	float heightProportion = 0.2;
	float x = 0;
	float y = 0;
	float width = _width;
	float height = heightProportion * _height;
	y = (_height / 2) - height;
	_box = new Box(x, y, width, height, BOXCOLOR);
}

void RetryScreen::_createText()
{
	Fonts &font = Fonts::getInstance();
	int fontHeight = al_get_font_line_height(font.dancingScriptFont);
	float x, y;
	x = _box->getX() + _width / 2;
	y = _box->getY() + fontHeight;
	_text = new Text(font.dancingScriptFont, TEXTCOLOR, x, y, _msg);
	_text->center();
}

void RetryScreen::_createButtons()
{
	std::vector<std::string> labels = {"New Game", "Main Menu"};
	int fontHeight = al_get_font_line_height(_text->getFont());
	int margin = 20;
	float widthProportion = 0.5;
	float heightProportion = 0.3;
	float width = (widthProportion * _box->getWidth()) - (margin * labels.size());
	float height = width * heightProportion;
	float x = ((_box->getWidth() - (width * labels.size()) - margin) / 2);
	float y = _text->getY() + fontHeight + margin;
	for (int i = 0; i < labels.size(); i++)
	{
		Button *button = new Button(x, y, width, height, BGCOLOR, labels[i]);
		_buttons.push_back(button);
		x += width + margin;
	}
}