
#include <Box.hpp>
#include <allegro5/allegro_primitives.h>
Box::Box()
{
}

Box::Box(float x, float y, float width, float height, alColor bgColor) : _x(x), _y(y), _width(width), _height(height), _bgColor(bgColor) {}

void Box::setX(float x)
{
	_x = x;
}

void Box::setY(float y)
{
	_y = y;
}

void Box::setWidth(float width)
{
	_width = width;
}

void Box::setHeight(float height)
{
	_height = height;
}

float Box::getX()
{
	return _x;
}

ALLEGRO_COLOR Box::getBgColor(){
	return _bgColor;
}

float Box::getY()
{
	return _y;
}

float Box::getWidth()
{
	return _width;
}

float Box::getHeight()
{
	return _height;
}

void Box::draw()
{
	al_draw_filled_rectangle(_x, _y, _x + _width, _y + _height, _bgColor);
}