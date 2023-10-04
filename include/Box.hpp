
#ifndef BOX_H
#define BOX_H
#include <allegro5/allegro5.h>

class Box
{
	typedef ALLEGRO_COLOR alColor;
	float _x, _y, _width, _height;
	ALLEGRO_COLOR _bgColor;
	bool _init();

  public:
	Box();
	Box(float, float, float, float, alColor);
	void setX(float);
	void setY(float);
	void setWidth(float);
	void setHeight(float);

	float getX();
	float getY();
	float getWidth();
	float getHeight();
	ALLEGRO_COLOR getBgColor();

	void draw();
};

#endif