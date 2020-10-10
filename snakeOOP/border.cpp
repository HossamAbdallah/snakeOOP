#include "Border.h"
#include "Screen.h"

Border::Border()
{
	wiedth = 80;
	hight = 26;
}

Border::Border(COORD screenSize)
{
	wiedth = screenSize.X;
	hight = screenSize.Y;
}

Border::Border(int wiedth, int hight)
{

	wiedth = wiedth;
	hight = hight;
}



void Border::draw()
{
	//Screen::setPosition(0, 0);
	for (int i = 0; i < wiedth; i++) //up
	{
		cout << "-";
	}
	cout << endl; 

	for (int i = 1; i < hight - 1; i++) //left
	{
		Screen::setPosition(0, i);
		cout << "|" << endl;

	}
	cout << endl;

	for (int i = 1; i < hight - 1; i++) //right
	{
		Screen::setPosition(wiedth - 1, i);
		cout << "|" << endl;

	}
	Screen::setPosition(0, hight - 1);
	for (int i = 0; i < wiedth; i++) // down
	{

		cout << "-";
	}
	cout << endl;

}



