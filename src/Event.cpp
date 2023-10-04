#include "Event.hpp"
#include "Logic.hpp"
Event::Event()
{
	_data = new data();
	_data->eventType = SCREEN_EVENT;
	_data->difficulty = EASY;
	_queue = al_create_event_queue();
	al_init_user_event_source(&_source);
	registerEvent(&_source);
}

Event::~Event()
{
	al_destroy_event_queue(_queue);
}

Event &Event::getInstance()
{
	static Event instance;
	return instance;
}

ALLEGRO_EVENT_SOURCE *Event::getSource()
{
	return &_source;
}

void Event::emitEvent(int toScreen)
{
	_data->toScreen = toScreen;
	_data->msg = "";
	//_data->fromScreen=-1;
	ALLEGRO_EVENT customEvent;
	customEvent.type = _data->eventType;
	customEvent.user.data1 = reinterpret_cast<intptr_t>(_data);
	al_emit_user_event(getSource(), &customEvent, NULL);
}

void Event::emitEvent(int toScreen, int fromScreen)
{
	_data->toScreen = toScreen;
	_data->fromScreen = fromScreen;
	_data->msg = "";
	ALLEGRO_EVENT customEvent;
	customEvent.type = _data->eventType;
	customEvent.user.data1 = reinterpret_cast<intptr_t>(_data);
	al_emit_user_event(getSource(), &customEvent, NULL);
}

void Event::emitEvent(int toScreen, int fromScreen,int difficulty)
{
	_data->toScreen = toScreen;
	_data->fromScreen = fromScreen;
	_data->difficulty=difficulty;
	_data->msg = "";
	ALLEGRO_EVENT customEvent;
	customEvent.type = _data->eventType;
	customEvent.user.data1 = reinterpret_cast<intptr_t>(_data);
	al_emit_user_event(getSource(), &customEvent, NULL);
}

void Event::emitEvent(int toScreen, std::string msg)
{
	_data->toScreen = toScreen;
	//_data->fromScreen=-1;
	_data->msg = msg;
	ALLEGRO_EVENT customEvent;
	customEvent.type = _data->eventType;
	customEvent.user.data1 = reinterpret_cast<intptr_t>(_data);
	al_emit_user_event(getSource(), &customEvent, NULL);
}

/*void Event::emitEvent(int toScreen, std::string msg, int difficulty)
{
	_data->toScreen = toScreen;
	//_data->fromScreen=-1;
	_data->msg = msg;
	_data->difficulty = difficulty;
	ALLEGRO_EVENT customEvent;
	customEvent.type = _data->eventType;
	customEvent.user.data1 = reinterpret_cast<intptr_t>(_data);
	al_emit_user_event(getSource(), &customEvent, NULL);
}*/

ALLEGRO_EVENT_QUEUE *Event::getQueue()
{
	return _queue;
}

void Event::registerEvent(ALLEGRO_EVENT_SOURCE *src)
{
	al_register_event_source(_queue, src);
}