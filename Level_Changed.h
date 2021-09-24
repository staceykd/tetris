#pragma once
#include "Draw.h"
#include "Pieces.h"
#include <windows.h>

class level{
public:
	level(Draw &da,int width=10,int heigh=20);
	~level();

	void drawboard()const;
	bool rotating();
	bool move(int xdistance,int ydistance);

	bool update();
	bool is_gameover();

	void speed()const;
	void score()const;
};