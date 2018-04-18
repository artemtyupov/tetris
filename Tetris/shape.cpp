#include "shape.h"


shapeCl::shapeCl()
{
	this->id = rand() % 5 + 1;
	switch (this->id)
	{
	case 1:
		{
			shape1Cl shp;
			break;
		}
	case 2:
		{
			shape2Cl shp;
			break;
		}
	case 3:
		{
			shape3Cl shp;
			break;
		}
	case 4:
		{
			shape4Cl shp;
			break;
		}
	case 5:
		{
			shape5Cl shp;
			break;
		}
	default:
		break;
	}
}


boardCl shapeCl::takeBoard()
{
	switch (this->id)
	{
	case 1:
		{
			
			return this->takeBoard1();
			break;
		}
	case 2:
		{
			return this->takeBoard2();
			break;
		}
	case 3:
		{
			//return this->takeBoard1();
			break;
		}
	case 4:
		{
			//return this->takeBoard1();
			break;
		}
	case 5:
		{
			//return this->takeBoard1();
			break;
		}
	default:
		break;
	}
	return this->takeBoard1();
}

/*
void shapeCl::changeShape()
{
	switch (this->id)
	{
	case 1:
		{
			shapeCl newShape;
			this->id = newShape.id;
			this->changeIdAndBoard1();
			return;
			break;
		}
	case 2:
		{
			this->changeIdAndBoard2();
			return;
			break;
		}
	case 3:
		{
			//return this->takeBoard1();
			break;
		}
	case 4:
		{
			//return this->takeBoard1();
			break;
		}
	case 5:
		{
			//return this->takeBoard1();
			break;
		}
	default:
		break;
	}
}
*/