#include "pch.h"
#include "Automat.h"
#include <iostream>

using namespace std;





Automat::Automat()
{
	derZustand[0] = new Zustand0(this);
	derZustand[1] = new Zustand1(this);
	
	dieTransition01 = new Transition01(this, derZustand);
		
	UebTab t[] = {	{derZustand[0],dieTransition01,derZustand[1]},
					{derZustand[1],dieTransition01,derZustand[1]}
				 };
	
	for (int i = 0 ;i< anzahlTrans; i++)
		uebTab[i] = t[i];

	dieMachine = new StateMachine(uebTab, anzahlTrans);
	
}

void Automat::process(int pEreignis)
{
	dieMachine->process(pEreignis);
			
	
}

void Automat::setTabState(Zustand* pState, int pLine)
{
	uebTab[pLine].nextState = pState;
}

