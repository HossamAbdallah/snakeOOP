#include "Screen.h"


void Screen::clearScreen()
{
	system("cls");	
}

void Screen::getSize()
{

	HANDLE handler = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	wiedth = csbi.srWindow.Right - csbi.srWindow.Left - 15;
	hight = csbi.srWindow.Bottom - csbi.srWindow.Top - 3;

}

void Screen::hideCorsor()
{

	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false ; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void Screen::setPosition(int x, int y)
{
	COORD coord;
	coord.X = x; 
	coord.Y = y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


