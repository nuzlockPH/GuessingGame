#include <allegro5/allegro5.h>
#include <string>

#include "Box.hpp"
#include "Text.hpp"

class Word : public Text
{
	Box *_box;
	std::string _word;
	float _calculateX(float);
	float _calculateY(float);

  public:
	Word(float, float, float, float, ALLEGRO_COLOR, std::string, ALLEGRO_FONT *);
	//static Word createWord(float,float,float,float,ALLEGRO_COLOR,std::string,ALLEGRO_FONT*);
	Word();
	~Word();
	void draw();
};