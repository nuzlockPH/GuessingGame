#include "Buttons.hpp"
#include "Box.hpp"
#include "Screen.hpp"
#include "Text.hpp"
#include <vector>
class DifficultyScreen : public Screen
{
	float _width, _height;
	std::vector<Button *> _buttons;
	Box *_box;
	Text* _text;
	void _setupBox();
	void _setupButtons();
	void _setupText();
  public:
	DifficultyScreen();
	DifficultyScreen(float, float);
	~DifficultyScreen();
	void draw() override;
	bool contains(float, float) override;
};