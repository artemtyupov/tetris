#pragma once

#include <stdlib.h>
#include "board.h"

class shape1Cl: public boardCl
{

protected:

	int id_spec; // ���������� ����� �������� ����� ��������� ������

public:

	shape1Cl(); //�����������

	~shape1Cl(){}; //����������

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

	int id_spec; // ���������� ����� �������� ����� ��������� ������

public:

	shape2Cl(); //�����������

	~shape2Cl(){}; //����������

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

	int id_spec; // ���������� ����� �������� ����� ��������� ������

public:

	shape3Cl(); //�����������

	~shape3Cl(){}; //����������
};

class shape4Cl: public boardCl
{

protected:

	int id_spec; // ���������� ����� �������� ����� ��������� ������

public:

	shape4Cl(); //�����������

	~shape4Cl(){}; //����������
};

class shape5Cl: public boardCl
{

protected:

	int id_spec; // ���������� ����� �������� ����� ��������� ������

public:

	shape5Cl(); //�����������

	~shape5Cl(){}; //����������
};