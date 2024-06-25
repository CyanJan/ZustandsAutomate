#include "pch.h"
#include "Led.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

Led::Led(int pPosX, int pPosY, int pWidth, int pHeight)
{
	PosX = pPosX;
	Posy = pPosY;

	Width = pWidth;
	Height = pHeight;

	
}

void Led::setPosX(int pPosX)
{
	PosX = pPosX;
}

void Led::setPosY(int pPosY)
{
	Posy = pPosY;
}

void Led::setWidth(int pWidth)
{
	Width = pWidth;
}

void Led::setHeight(int pHeight)
{
	Height = pHeight;
}

void Led::setOnOff(bool pZustand)
{
	if (pZustand == 0)
	{
		OnOff = Color::Black;
	}
	else
	{
		OnOff = Color::White;
	}
}
