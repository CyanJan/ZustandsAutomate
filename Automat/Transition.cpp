#include "pch.h"
#include "Transition.h"
#include "Automat.h"

Transition::Transition(Automat* pAutomat, Zustand* pState[])
{
	derAutomat = pAutomat;
	derZustand = pState;
}
