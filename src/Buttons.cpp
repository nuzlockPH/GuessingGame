
#include <allegro5/allegro_primitives.h>
#include "Buttons.hpp"
#include "Fonts.hpp"
#include "Colors.hpp"
#include "Errors.hpp"

Button::Button() : _text(NULL),_isClicked(false)
{
	_x = _y = _width = _height = -1;
	_color = getInvalidColor();
}

Button::~Button()
{
	delete[] _text;
}

Button::Button(float x, float y, float width, float height, ALLEGRO_COLOR color, std::string label) : _x(x), _y(y), _width(width), _height(height), _color(color), _label(label),_isClicked(false)
{
	Fonts &font = Fonts::getInstance();
	int textHeight = al_get_font_line_height(font.dancingScriptFont);
	float textX = _x + (_width / 2);
	float textY = _y + ((_height - textHeight) / 2);
	//float textY=_height/2;
	_text = new Text(font.dancingScriptFont, TEXTCOLOR, textX, textY, _label);
}

std::string Button::getLabel(){
	return _label;
}

bool Button::isClicked(){
	return _isClicked;
}

void Button::setClicked(bool val){
	_isClicked=val;
}

bool Button::contains(float x, float y)
{
	return (x >= _x && x <= _x + _width && y >= _y && y <= _y + _height);
}

void Button::draw()
{
	al_draw_filled_rectangle(_x, _y, _x + _width, _y + _height, _color);
	if (_text == NULL)
		throw NullError("_text has a value NULL.");
	_text->draw();
}