
#pragma once


#include "Transition.h"


struct UebTab {
	Zustand* actState;
	Transition* dieTransition;
	Zustand* nextState;
};




class StateMachine
{
	UebTab* tab;
	Zustand* actState;
	int inState;
	int anzahlTrans;

public:
	StateMachine(UebTab pTab[], int panzahlTrans);
	void process(int pEreignis);
	int getZustandNr() { return actState->getZustandNr(); }
	int getTimeInState() { return inState; }
};

