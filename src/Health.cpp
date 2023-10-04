
#include "Health.hpp"
#include "Colors.hpp"
Health::Health() {}

Health::Health(float x, float y, float width, float height, ALLEGRO_COLOR color, std::string text, ALLEGRO_FONT *font) : Text(font, TEXTCOLOR, x, y, text)
{
	_box=new Box(x,y,width,height,color);
	float textX = x + (width / 2);
	float textY = y + (height / 2);
	setX(textX);
	setY(textY);
	center();
}

Health::~Health()
{
	delete[] _box;
}

void Health::draw()
{
	_box->draw();
	Text::draw();
}