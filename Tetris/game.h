#pragma once
#include "board.h"
#include "shape.h"

enum processGame {gameNotEnd, gameEnd};

class gameCl: public boardCl //��������������� ��� ����� ����
{
protected:
		int score; //������� ��������� ����
private:

public:
	//�����������
	gameCl ()
	{

	}
	//����������
	~gameCl () 
	{

	}
	
	//��� ������� ����
	processGame gaming(boardCl *board, shapeCl *shape);

	
	void startGame() //������ ���� ������� ��� ���������
	{
	this->score = 0;
	static boardCl board;
	static shapeCl shape;
	processGame status = gameNotEnd;
	while (status != gameEnd)
		status = this->gaming(&board, &shape);
	}
	
	int endGame() //����� ����
	{
		return this->score;
	}
	



};