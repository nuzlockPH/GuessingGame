#include "Text.hpp"
#include "Errors.hpp"
#include "Colors.hpp"

Text::Text()
{
	_color=getInvalidColor();
	_x = _y = -1;
	_text = "-1";
}

Text::Text(ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x, float y, std::string text) : _font(font), _color(color), _x(x), _y(y), _text(text) {}

void Text::center(){
	float textHeight=al_get_font_line_height(getFont());
	_y-=(textHeight/2);
}

void Text::setText(std::string text){
	_text=text;
}

void Text::setX(float x)
{
	_x = x;
}

void Text::setY(float y)
{
	_y = y;
}

std::string Text::getText(){
	return _text;
}

ALLEGRO_FONT* Text::getFont(){
	if(_font==NULL) throw NullError("Text::_font has value NULL.");
	return _font;
}

ALLEGRO_COLOR Text::getColor(){
	if(isInvalidColor(_color)) throw NullError("Text::_color has invalid value.");
	return _color;
}

float Text::getX()
{
	if (_x == -1)
		throw NullError("Text::_x is not set.");
	return _x;
}

float Text::getY()
{
	if (_y == -1)
		throw NullError("Text::_y is not set.");
	return _y;
}

void Text::draw()
{
	al_draw_text(getFont(), getColor(), getX(), getY(), ALLEGRO_ALIGN_CENTER, _text.c_str());
}