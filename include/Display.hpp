
#include <allegro5/allegro5.h>

extern const float SCREENWIDTH;
extern const float SCREENHEIGHT;
class Display{
	float _width,_height;
	ALLEGRO_DISPLAY* _display;
	void _setupDisplay();
	public:
	Display();
	Display(float,float);
	void setDisplay(ALLEGRO_DISPLAY*);
	ALLEGRO_DISPLAY* getDisplay();
	
	float getWidth();
	float getHeight();
};