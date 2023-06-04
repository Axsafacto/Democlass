//definisi class hero

#include <iostream>
#include "hero.h"

//constructor

Hero::Hero()
{
	posX = 0;
	posY = 0;
	std::cout <<"Creating hero at " <<posX << " ," << posY << "\n";
	
}

//destructor
Hero::~Hero()
{
	std::cout <<"Deleting a hero\n";
}

//menempatkan hero pada lokasi x , y
void Hero::locate(int x,int y)
{
	posX = x;
	posY = y;
}

// menggambarkan hero pada lokasi x, y
void Hero::draw()
{
	std::cout<<"Drawing hero at " << posX << "," <<posY<<"\n";
}

//menggambar hero ke depan sumbu Y minus
void Hero::move_forward()
{
	--posY;
}
//menggambar hero ke depan sumbu Y plus
void Hero::move_backward()
{
	++posY;
}
//menggambar hero ke depan sumbu X minus
void Hero::move_left()
{
	--posX;
}
//menggambar hero ke depan sumbu X plus
void Hero::move_right()
{
	++posX;
}
