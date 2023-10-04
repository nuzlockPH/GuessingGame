#include "Colors.hpp"

bool isInvalidColor(ALLEGRO_COLOR color)
{
	unsigned int r, g, b;
	r = g = b = -1;
	if (color.r == r || color.g == g || color.b == b)
		return true;
	return false;
}

ALLEGRO_COLOR getInvalidColor(){
	return al_map_rgb(-1,-1,-1);
}

ALLEGRO_COLOR RED = al_map_rgb(255, 0, 0);
ALLEGRO_COLOR GREEN = al_map_rgb(0, 255, 0);
ALLEGRO_COLOR BLUE = al_map_rgb(0, 0, 255);
ALLEGRO_COLOR WHITE = al_map_rgb(255, 255, 255);
ALLEGRO_COLOR BLACK = al_map_rgb(0, 0, 0);
unsigned int r = 200, g = 120, b = 80;
ALLEGRO_COLOR BOXCOLOR = al_map_rgb(r, g, b);
ALLEGRO_COLOR BGCOLOR = al_map_rgb(255 - r, 255 - g, 255 - b);
ALLEGRO_COLOR TEXTCOLOR=al_map_rgb(100-r,100-g,100-b);