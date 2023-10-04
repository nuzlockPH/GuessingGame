#include <allegro5/allegro_ttf.h>
#include "Fonts.hpp"
#include "Errors.hpp"
#include "Initialize.hpp"

const int FONTSIZE = 50;

Fonts &Fonts::getInstance()
{
	static Fonts instance;
	return instance;
}

void Fonts::destroyInstance()
{
	static Fonts &instance = Fonts::getInstance();
	delete[] & instance;
}

Fonts::Fonts()
{
	dancingScriptFont = loadFont(DANCING_SCRIPT, FONTSIZE);
}

Fonts::~Fonts()
{
	al_destroy_font(dancingScriptFont);
}

ALLEGRO_FONT *Fonts::loadFont(std::string fontPath, int fontSize)
{
	int flags = ALLEGRO_TTF_MONOCHROME;
	return al_load_font(fontPath.c_str(), fontSize, flags);
}