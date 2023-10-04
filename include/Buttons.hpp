#ifndef BUTTONS_H
#define BUTTONS_H 
#include <allegro5/allegro5.h>
#include <string>

#include "Text.hpp"

bool isValidNum(float);
class Button{
	float _x,_y,_width,_height;
	ALLEGRO_COLOR _color;
	std::string _label;
	Text* _text;
	bool _isClicked;
	
	public:
	Button();
	~Button();
	Button(float,float,float,float,ALLEGRO_COLOR,std::string);
	float getX();
	float getY();
	float getWidth();
	float getHeight();
	std::string getLabel();
	ALLEGRO_COLOR getColor();
	bool isClicked();
	void setClicked(bool);
	bool contains(float,float);
	void draw();
};
#endif