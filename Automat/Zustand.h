#pragma once

class Automat;
class Zustand abstract
{
protected:
	Automat* derAutomat;
	int zustandNr;
public:
	Zustand(Automat* pAutomat);
	virtual void actionEntry() = 0;
	virtual void actionDo() = 0;
	virtual void actionExit() = 0;
	int getZustandNr(){ return zustandNr; }
};

