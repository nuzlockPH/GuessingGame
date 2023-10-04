#include <vector>
#include "Screen.hpp"
#include "Buttons.hpp"

class StartScreen:public Screen{
	float _width,_height;
	std::vector<Button*> _buttons;
	
	public:
	StartScreen();
	StartScreen(float,float);
	~StartScreen();
	void addButton(Button*&,std::string);
	bool contains(float,float)override;
	void draw()override;
};
