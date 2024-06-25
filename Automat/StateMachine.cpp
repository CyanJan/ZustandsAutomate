#include "pch.h"
#include "StateMachine.h"



StateMachine::StateMachine(UebTab pTab[], int panzahlTrans)
{
	tab = pTab;
	inState = 0;
	actState = tab[0].actState;
	anzahlTrans = panzahlTrans;
	
	//actState = state1;
	//oldState = state1;
}


void StateMachine::process(int pEreignis) 
{
	
	for (int i = 0; i < anzahlTrans; i++)
	{
		if ((tab[i].actState == actState && tab[i].dieTransition->getEreignis() == pEreignis)
			&& (tab[i].dieTransition->waechterBed() == true))
		{
			actState->actionExit();
			tab[i].dieTransition->transFunktion();
			actState = tab[i].nextState;
			actState->actionEntry();
			inState = 0;
			i = anzahlTrans;
		}
	}

	if (pEreignis == timer_tick)
	{
		actState->actionDo();
	}
	if (pEreignis == tick_sekunde)
	{
		inState++;
	}
}
