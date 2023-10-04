
#include <allegro5/allegro5.h>
#include <string>
#include "Text.hpp"
#include "Box.hpp"
class Health:public Text{
	Box* _box;
	public:
	Health();
	Health(float,float,float,float,ALLEGRO_COLOR,std::string,ALLEGRO_FONT*);
	~Health();
	void draw();
};