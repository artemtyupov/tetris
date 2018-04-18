#pragma once

#include <stdlib.h>
#include "board.h"

class shape1Cl: public boardCl
{

protected:

	int id_spec; // определяем какой стороной будет повернута фигура

public:

	shape1Cl(); //конструктор

	~shape1Cl(){}; //деструктор

	boardCl takeBoard1()
	{
		boardCl res;
		shape1Cl shapeBoard;
		for (int i = 0; i < ROWS_DEF; i++)
			for (int j = 0; j < COLUMNS_DEF; j++)
				this->board[i][j] = shapeBoard.board[i][j];
		return this->board;
	}
	/*
	void changeIdAndBoard1()
	{
		shape1Cl newShape;
		this->id_spec = newShape.id_spec;
		this->cleanBoard();
		this->changeBoard(newShape.takeBoard1);
	}*/

};

class shape2Cl: public boardCl
{

protected:

	int id_spec; // определяем какой стороной будет повернута фигура

public:

	shape2Cl(); //конструктор

	~shape2Cl(){}; //деструктор

	boardCl takeBoard2()
	{
		boardCl res;
		shape1Cl shapeBoard;
		for (int i = 0; i < ROWS_DEF; i++)
			for (int j = 0; j < COLUMNS_DEF; j++)
				res.board[i][j] = shapeBoard.board[i][j];
		return res;
	}
	/*
	void changeIdAndBoard2()
	{
		shape2Cl newShape;
		int shapeBoard[20][10];
		this->id_spec = newShape.id_spec;
		this->cleanBoard();
		newShape.takeBoard2(shapeBoard);
		this->changeBoard(shapeBoard);
	}*/
};

class shape3Cl: public boardCl
{

protected:

	int id_spec; // определяем какой стороной будет повернута фигура

public:

	shape3Cl(); //конструктор

	~shape3Cl(){}; //деструктор
};

class shape4Cl: public boardCl
{

protected:

	int id_spec; // определяем какой стороной будет повернута фигура

public:

	shape4Cl(); //конструктор

	~shape4Cl(){}; //деструктор
};

class shape5Cl: public boardCl
{

protected:

	int id_spec; // определяем какой стороной будет повернута фигура

public:

	shape5Cl(); //конструктор

	~shape5Cl(){}; //деструктор
};