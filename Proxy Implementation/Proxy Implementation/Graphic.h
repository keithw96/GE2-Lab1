#pragma once
#ifndef GRAPHIC
#define GRAPHIC

#include "IGraphic.h"

class Graphic : public IGraphic
{
public: 

	Graphic();
	~Graphic();
	void Draw();

};
#endif // !GRAPHIC
