#include <string>
#include <allegro5/allegro5.h>
#define SCREEN_EVENT (ALLEGRO_GET_EVENT_TYPE('S', 'C', 'R', 'E'))

class Event
{

  public:
  struct data{
		int eventType;
		int toScreen;
		int fromScreen;
		int difficulty;
		std::string msg;
	};
  static Event& getInstance();
	void registerEvent(ALLEGRO_EVENT_SOURCE *);
	ALLEGRO_EVENT_QUEUE *getQueue();
	ALLEGRO_EVENT_SOURCE* getSource();
	void emitEvent(int);
	void emitEvent(int,int);
	void emitEvent(int,int,int);
	void emitEvent(int,std::string);
	//void emitEvent(int,std::string,int);
	private:
	data* _data;
	ALLEGRO_EVENT_QUEUE *_queue;
	ALLEGRO_EVENT_SOURCE _source;
	Event();
	~Event();
};