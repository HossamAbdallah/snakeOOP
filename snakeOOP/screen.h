#pragma once
#include <Windows.h>
class Screen
{
private:
	//HANDLE handler;
	
public:
	int wiedth, hight;
	void clearScreen();
	void getSize();
	void hideCorsor();
	static void setPosition(int x, int y);
};

