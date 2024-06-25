#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class Led
{
private: 
	int PosX;
	int Posy;

	int Width;
	int Height;

	Color OnOff;
	Color Off;

public:
	Led(int pPosX, int pPosY, int pWidth, int pHeight);

	void setPosX		(int pPosX	);
	void setPosY		(int pPosY	);
	void setWidth		(int pWidth	);
	void setHeight		(int pHeight);

	void setOnOff		(bool pZustand);

	int	 getPosX		();
	int	 getPosY		();
	int	 getwidht		();
	int	 getHeight		();


	
};

