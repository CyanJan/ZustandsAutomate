#pragma once
#include "Zustand.h"
class Zustand0 :
    public Zustand
{
public:
	Zustand0(Automat *pAutomat);
	virtual void actionEntry() override;
	virtual void actionDo() override;
	virtual void actionExit() override;
	
};

class Zustand1 :
	public Zustand
{
public:
	Zustand1(Automat* pAutomat);
	virtual void actionEntry() override;
	virtual void actionDo() override;
	virtual void actionExit() override;

};



