#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;
class Border
{
	
private:
	int wiedth, hight;
public:
	Border();
	Border(COORD screenSize);
	Border(int wiedth, int hight);

    void draw();

	


};

