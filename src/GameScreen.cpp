#include "GameScreen.hpp"
#include "Colors.hpp"
#include "Errors.hpp"
#include "Event.hpp"
#include "Fonts.hpp"
#include <iostream>

GameScreen::GameScreen() {}

GameScreen::~GameScreen() {}

GameScreen::GameScreen(float width, float height) : _width(width), _height(height)
{
	_createKeyboard();
	_createBackBtn();
	_createWord();
	_createHealth();
	_logic.setDifficulty(EASY);
	_logic.start();

	setHealth(_logic.getMaxMisses());
	setWord(_logic.getGuessedLetters());
}

void GameScreen::reset(){
	_logic.start();
	setHealth(_logic.getMaxMisses());
	setWord(_logic.getGuessedLetters());
}

void GameScreen::setWord(std::string word)
{
	_word->setText(word);
}

void GameScreen::setHealth(int health)
{
	std::string text = "Health: ";
	std::string healthTxt = std::to_string(health);
	text.append(healthTxt);
	_healthVis->setText(text);
}

void GameScreen::setDifficulty(int difficulty){
	_logic.setDifficulty(difficulty);
	setHealth(_logic.getMaxMisses());
	setWord(_logic.getGuessedLetters());
}

void GameScreen::draw()
{
	for (auto &button : _buttons)
	{
		button->draw();
	}
	_word->draw();
	_healthVis->draw();
	al_flip_display();
}

bool GameScreen::contains(float x, float y)
{
	for (auto &button : _buttons)
	{
		if (button->contains(x, y))
		{
			Event &event = Event::getInstance();
			button->setClicked(true);
			std::string label = button->getLabel();
			if (label == BACK)
			{
				int toScreen = STARTSCREEN;
				event.emitEvent(toScreen);
				return true;
			}
			else
			{
				std::string letter = button->getLabel().substr(0, 1);
				int state = _logic.run(letter);
				if (state == WON)
				{
					std::string word = _logic.getWord();
					std::string msg = "You have won. the word is ";
					msg.append(word);
					event.emitEvent(RETRYSCREEN,msg);
					//return true;
				}
				else if (state == LOSS)
				{
					std::string word = _logic.getWord();
					std::string msg = "You have lost. the word is ";
					msg.append(word);
					event.emitEvent(RETRYSCREEN,msg);
					//return true;
				}
				else
				{
					setWord(_logic.getGuessedLetters());
					setHealth(_logic.getMaxMisses());
				}
				return true;
			}
		}
	}
	return false;
}

void GameScreen::_createHealth()
{
	Fonts &font = Fonts::getInstance();
	float widthProportion = 0.3;
	float width = widthProportion * _width;
	float height = width / 2;
	float x = 0 + (_width - width);
	float y = 0;
	std::string word = "Health: 0";
	_healthVis = new Health(x, y, width, height, BOXCOLOR, word, font.dancingScriptFont);
}

void GameScreen::_createWord()
{
	Fonts &font = Fonts::getInstance();
	float widthProportion = 0.8;
	float heightProportion = 0.2;
	float width = widthProportion * _width;
	float height = heightProportion * width;
	float x = 0 + ((_width - width) / 2);
	float y = 0 + ((_height - height - _keyboardHeight) / 2);
	std::string word = "SAMPLE";
	_word = new Word(x, y, width, height, BOXCOLOR, word, font.dancingScriptFont);
}

void GameScreen::_createBackBtn()
{
	float x = 0, y = 0;
	float width = 200, height = 100;
	std::string label = "BACK";

	Button *backBtn = new Button(x, y, width, height, BOXCOLOR, label);
	_buttons.push_back(backBtn);
}

void GameScreen::_createKeyboard()
{
	int rows = 3;
	int columns[3]{10, 8, 8};
	std::string letters = "QWERTYUIOPASDFGHJKLZXCVBNM";
	float proportion = 0.3;
	float keyboardHeight = proportion * _height;
	_keyboardHeight = keyboardHeight;
	float buttonHeight = keyboardHeight / rows;
	int x = 0;
	int y = _height - keyboardHeight;
	int index = 0;
	for (int row = 0; row < 3; ++row)
	{
		float buttonWidth = _width / columns[row];
		for (int column = 0; column < columns[row]; ++column)
		{
			if (index < 26)
			{
				std::string letter = letters.substr(index, 1);
				Button *button = new Button(x, y, buttonWidth, buttonHeight, BOXCOLOR, letter);
				_buttons.push_back(button);
			}
			x += buttonWidth;
			++index;
		}
		x = 0;
		y += buttonHeight;
	}
}
