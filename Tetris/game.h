#pragma once
#include "board.h"
#include "shape.h"

enum processGame {gameNotEnd, gameEnd};

class gameCl: public boardCl //непосредственно сам класс игры
{
protected:
		int score; //текущие набранные очки
private:

public:
	//конструктор
	gameCl ()
	{

	}
	//деструктор
	~gameCl () 
	{

	}
	
	//сам процесс игры
	processGame gaming(boardCl *board, shapeCl *shape);

	
	void startGame() //начало игры которое все запускает
	{
	this->score = 0;
	static boardCl board;
	static shapeCl shape;
	processGame status = gameNotEnd;
	while (status != gameEnd)
		status = this->gaming(&board, &shape);
	}
	
	int endGame() //конец игры
	{
		return this->score;
	}
	



};