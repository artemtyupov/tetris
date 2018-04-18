#include "board.h"
#include "shape.h"

//конструктор
boardCl::boardCl()
{
	for (int i = 0; i < ROWS_DEF; i++)
		for (int j = 0; j < COLUMNS_DEF; j++)
			this->board[i][j] = 0;
} 

//сравнение с бордом формы
bool boardCl::compareBoards(boardCl *shapeBoard)
{
	for (int i = 0; i < ROWS_DEF; i++)
		for (int j = 0; j < COLUMNS_DEF; j++)
			if (this->board[i][j] == 1 && shapeBoard->board[i][j] == 1)
				return false;
	return true;
}

//изменение борда
int boardCl::changeBoard(boardCl *shapeBoard)
{
	int res = 0;
	bool count = true;
	for (int i = 0; i < ROWS_DEF; i++)
	{
		for (int j = 0; j < COLUMNS_DEF; j++)
		{
			if (this->board[i][j] == 0)
				this->board[i][j] = shapeBoard->board[i][j];
			else
				continue;
			if (count && shapeBoard->board[i][j] == 1)
			{
				count = false;
				res++;
			}
		}
		count = true;
	}
	return res;
}

//ждем пока фигурка упадет
bool boardCl::checkFalling(int iter)
{
	int count = 0;
	for (int i = iter - 1; i < ROWS_DEF - 1; i++)
	{
		for (int j = 0; j < COLUMNS_DEF; j++)
		{
			if (this->board[i][j] == 1)
			{
				if (this->board[i + 1][j] == 1)
					return false;
			}
		}
		int h = 0;
		for (int k = iter + count; k >= 0; k--)
		{
			for (int x = 0; x < COLUMNS_DEF; x++)
			{
				if (this->board[k - 1][x] == 1)
			{
				this->board[k][x] = 1;
				this->board[k - 1][x] = 0;
			}
			}
		}
		count++;
	}
	return true;
}

//очистка борда
void boardCl::cleanBoard()
{
	for (int i = 0; i < ROWS_DEF; i++)
		for (int j = 0; j < COLUMNS_DEF; j++)
			this->board[i][j] = 0;
}