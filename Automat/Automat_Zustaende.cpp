#include "pch.h"
#include "Zustand.h"
#include "Automat_Zustaende.h"
#include "Automat.h"

Zustand0::Zustand0(Automat* pAutomat):Zustand(pAutomat)
{
	zustandNr = 0;
}
void Zustand0::actionEntry()
{
	
}
void Zustand0::actionDo()
{

}
void Zustand0::actionExit()
{

}

Zustand1::Zustand1(Automat* pAutomat) :Zustand(pAutomat)
{
	zustandNr = 1;
}
void Zustand1::actionEntry()
{

}
void Zustand1::actionDo()
{

}
void Zustand1::actionExit()
{

}


