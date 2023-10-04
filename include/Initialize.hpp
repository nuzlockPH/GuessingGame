#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>

class Initialize{
	public:
	Initialize();
	bool initAllegro();
	bool initFont();
	bool initTtf();
	bool initPrimitives();
	bool initTouchInput();
};