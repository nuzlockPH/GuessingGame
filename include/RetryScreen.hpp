#include "Screen.hpp"
#include "Box.hpp"
#include "Buttons.hpp"
#include "Text.hpp"
#include <vector>
#include <string>

class RetryScreen:public Screen{
	float _width,_height;
	std::string _msg;
	Box* _box;
	Text* _text;
	std::vector<Button*> _buttons;

	void _createBox();
	void _createText();
	void _createButtons();
	public:
	RetryScreen();
	~RetryScreen();
	RetryScreen(float,float,std::string);
	void draw()override;
	bool contains(float,float)override;
	void setText(std::string);
};