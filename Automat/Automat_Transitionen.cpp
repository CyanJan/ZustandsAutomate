#include "pch.h"
#include "Automat_Transitionen.h"
#include "Automat.h"
#include "Zustand.h"

Transition01::Transition01(Automat* pAutomat, Zustand* pState[]) :Transition(pAutomat, pState)
{
	ereignis = tick_sekunde;
}
void Transition01::transFunktion()
{
	
}
bool Transition01::waechterBed()
{
	return true;
}


