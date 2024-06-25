#pragma once

#include "Automat_Zustaende.h"
#include "Automat_Transitionen.h"
#include "StateMachine.h"

const int anzahlTrans = 2;
const int anzahlZust = 2;


class Automat
{
	// Attribute des Automaten
	

	Zustand* derZustand[anzahlZust];
	Transition* dieTransition01;
	UebTab uebTab[anzahlTrans];
	StateMachine* dieMachine;
	
	int xToast;
	int yToast;

	int xToaster;
	int yToaster; 





public:
	Automat();
	void process(int pEreignis);
	int getZustandNr() {return dieMachine->getZustandNr(); }
	void setTabState(Zustand* pState,int pLine);
	int getTimeInState() { return dieMachine->getTimeInState(); }

	void setxyToast(int pxToast, int pyToast);
	int getxToast();
	int getYToast();

	void setxyToaster(int pxToaster, int pyToaster);
	int getxToaster();
	int getYToaster();

	// Operationen des Automaten

};

