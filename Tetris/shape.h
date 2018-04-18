#pragma once
#include "idShape.h"
#include <stdlib.h> 
#include "board.h"

//общий класс всех фигурок из тетриса
class shapeCl: public shape1Cl, public shape2Cl
{

protected:
	int id;
	
public:
	shapeCl(); //конструктор

	shapeCl(int id); //конструктор

	~shapeCl(){}; //деструктор

	boardCl takeBoard();

	void changeShape();
};