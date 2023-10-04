#include <vector>
#include "Screen.hpp"
#include "Buttons.hpp"
#include "Word.hpp"
#include "Box.hpp"
#include "Health.hpp"
#include "Logic.hpp"
class GameScreen : public Screen
{
	float _width, _height, _keyboardHeight;
	std::vector<Button *> _buttons;
	Word *_word;
	Health *_healthVis;
	Logic _logic;
	void _createHealth();
	void _createWord();
	void _createKeyboard();
	void _createBackBtn();

  public:
	GameScreen();
	~GameScreen();
	GameScreen(float, float);
	void setHealth(int);
	void setWord(std::string);
	void setDifficulty(int);
	bool contains(float, float) override;
	void draw() override;
	void reset();
};
