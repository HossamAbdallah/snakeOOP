#include <Windows.h>
#include "direction.h"
#pragma once

class Snake
{
public :
	int lenght ,speed ;
	COORD body[1000];
	DIRECTION dir ;

	void init();
	void print();
	void clear();
	void nextMove();
	void setSpeed();
	void checkSelfCollision();
	void setDir();


};



