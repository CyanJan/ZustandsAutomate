#pragma once
#include "Transition.h"

class Transition01 :
    public Transition
{
public:
    Transition01(Automat* pAutomat, Zustand* pZustand[]);
    virtual void transFunktion() override;
    virtual bool waechterBed() override;
};

