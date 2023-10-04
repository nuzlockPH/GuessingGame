
#include "Initialize.hpp"
#include "Errors.hpp"
Initialize::Initialize(){
	initAllegro();
	initFont();
	initTtf();
	initPrimitives();
	initTouchInput();
}

bool Initialize::initAllegro(){
	if(al_init()) return true;
	throw AllegroError("failed to initialize allegro.");
}

bool Initialize::initFont(){
	if(al_init_font_addon()) return true;
	throw AllegroError("failed to initialize font addon.");
}

bool Initialize::initTtf(){
	if(al_init_ttf_addon()) return true;
	throw AllegroError("failed to initialize ttf addon.");
}

bool Initialize::initPrimitives(){
	if(al_init_primitives_addon()) return true;
	throw AllegroError("failed to initialize primitives addon.");
}

bool Initialize::initTouchInput(){
	if(al_install_touch_input()) return true;
	throw AllegroError("failed to install touch input.");
}