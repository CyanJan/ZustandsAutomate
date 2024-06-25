#pragma once

#include "Zustand.h"
class Automat;

enum action { timer_tick, tick_sekunde};

class Transition abstract
{
protected:
	Automat* derAutomat;
	Zustand** derZustand;
	action ereignis;
public:
	Transition(Automat* pAutomat, Zustand* pState[]);
	virtual void transFunktion() = 0;
	virtual bool waechterBed() = 0;
	action getEreignis() { return ereignis; }
};

