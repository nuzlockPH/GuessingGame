
#ifndef TEXT_H
#define TEXT_H 
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <string>
class Text
{
	ALLEGRO_FONT* _font;
	ALLEGRO_COLOR _color;
	float _x, _y;
	std::string _text;

  public:
	Text();
	Text(ALLEGRO_FONT *, ALLEGRO_COLOR, float, float, std::string);
	void setX(float);
	void setY(float);
	void setText(std::string);
	
	ALLEGRO_FONT* getFont();
	ALLEGRO_COLOR getColor();
	float getX();
	float getY();
	std::string getText();
	void center();
	void draw();
};
#endif