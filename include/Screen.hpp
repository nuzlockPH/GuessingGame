
#ifndef SCREEN_H
#define SCREEN_H 
#define STARTSCREEN 1
#define GAMESCREEN 2
#define RETRYSCREEN 3
#define DIFFICULTYSCREEN 4
#define BACK "BACK"
#define START "START"
#define DIFFICULTY "DIFFICULTY"
#define MAINMENU "Main Menu"
#define NEWGAME "New Game"

class Screen{
	public:
	virtual bool contains(float,float);
	virtual void draw();
};
#endif