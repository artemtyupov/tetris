#include "game.h"

processGame gameCl::gaming(boardCl *board, shapeCl *shape)
{
	/*
	int shapeBoard[20][10];
	for (int i = 0; i < ROWS_DEF; i++)
		for (int j = 0; j < COLUMNS_DEF; j++)
			shapeBoard[i][j] = 0;
	shape->takeBoard(shapeBoard);
	*/
	boardCl shapeBoard = shape->takeBoard();
	while (board->compareBoards(&shapeBoard))
	{
		int i = 0;
		bool appeareShape = false;
		do
		{
			if (!appeareShape)
				i = board->changeBoard(&shapeBoard);
			else
			{
				appeareShape = true;
			}
		}
		while (board->checkFalling(i));
		//shape->changeShape();
	}
	return gameEnd;
}