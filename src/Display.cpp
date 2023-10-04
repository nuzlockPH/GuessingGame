#include "Display.hpp"
#include "Errors.hpp"

const float SCREENWIDTH=720;
const float SCREENHEIGHT=1460;

Display::Display():_width(SCREENWIDTH),_height(SCREENHEIGHT)
{
	_setupDisplay();
}

Display::Display(float width, float height):_width(width),_height(height)
{
	_setupDisplay();
}

void Display::_setupDisplay(){
	ALLEGRO_DISPLAY *display = al_create_display(_width, _height);
	_display = display;
	display = NULL;
}

void Display::setDisplay(ALLEGRO_DISPLAY* display){
	_display=display;
}

ALLEGRO_DISPLAY* Display::getDisplay(){
	if(_display==NULL) throw NullError("_display is NULL");
	return _display;
}

float Display::getWidth(){
	return _width;
}

float Display::getHeight(){
	return _height;
}