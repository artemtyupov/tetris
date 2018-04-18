#pragma once
#include "idShape.h"
#include <stdlib.h> 
#include "board.h"

//����� ����� ���� ������� �� �������
class shapeCl: public shape1Cl, public shape2Cl
{

protected:
	int id;
	
public:
	shapeCl(); //�����������

	shapeCl(int id); //�����������

	~shapeCl(){}; //����������

	boardCl takeBoard();

	void changeShape();
};