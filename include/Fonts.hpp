
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <string>

#define DANCING_SCRIPT "/system/fonts/DancingScript-Regular.ttf"

class Fonts{
	Fonts();
	~Fonts();
	public:
	static Fonts& getInstance();
	static void destroyInstance();
	ALLEGRO_FONT* loadFont(std::string,int);
	ALLEGRO_FONT* dancingScriptFont;
};