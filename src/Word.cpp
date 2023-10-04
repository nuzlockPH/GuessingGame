
#include "Word.hpp"
#include "Colors.hpp"
#include "Fonts.hpp"
#include <iostream>
Word::Word(){}

Word::Word(float x,float y,float width,float height,ALLEGRO_COLOR bgColor,std::string word,ALLEGRO_FONT* font):Text(font,TEXTCOLOR,x,y,word){
	_box=new Box(x,y,width,height,bgColor);
	float textX=x+(width/2);
	float textY=y+(height/2);
	Text::setX(textX);
	Text::setY(textY);
	Text::center();
}

Word::~Word(){
	delete [] _box; 
}

void Word::draw(){
	_box->draw();
	//_text->draw();
	Text::draw();
}