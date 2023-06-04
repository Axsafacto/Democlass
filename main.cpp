#include <iostream>
#include <windows.h>
#include <conio.h>
#include "hero.h"

using namespace std;

int main () {
	//Instansiasi
	
	Hero hero;
	
	hero.locate(1000, 1000);
	
	while(true)
	{
		hero.draw();
		char key = getch();
		if(key =='w') hero.move_forward();
		if(key =='s') hero.move_backward();
		if(key =='a') hero.move_left();
		if(key =='d') hero.move_right();
	}
	return 0;
}
