#include "idShape.h"

shape1Cl::shape1Cl()
{ 
	this->id_spec = rand() % 4 + 1; 
	switch (this->id_spec)
	{
	case 1:
		{
			this->board[0][4] = 1;     // //
			this->board[0][5] = 1;     //
			this->board[1][4] = 1;     //
			this->board[2][4] = 1;
			break;
		}
	case 2:
		{
			this->board[0][4] = 1;     //
			this->board[1][4] = 1;     // // //
			this->board[1][5] = 1;     
			this->board[1][6] = 1;
			break;
		}
	case 3:
		{
			this->board[0][5] = 1;        //
			this->board[1][5] = 1;        //
			this->board[2][4] = 1;     // //
			this->board[2][5] = 1;
			break;
		}
	case 4:
		{
			this->board[0][4] = 1;     
			this->board[0][5] = 1;    // // //
			this->board[0][6] = 1;         //
			this->board[1][6] = 1;
			break;
		}
	default:
		break;
	}
}


shape2Cl::shape2Cl()
{ 
	this->id_spec = rand() % 4 + 1; 
	switch (this->id_spec)
	{
	case 1:
		{
			this->board[0][5] = 1;      
			this->board[0][6] = 1;         // //
			this->board[1][4] = 1;     // //
			this->board[1][5] = 1;
			break;
		}
	case 2:
		{
			this->board[0][4] = 1;     //
			this->board[1][4] = 1;     // // 
			this->board[1][5] = 1;       //
			this->board[2][5] = 1;
			break;
		}
	case 3:
		{
			this->board[0][5] = 1;        
			this->board[0][6] = 1;        // //
			this->board[1][4] = 1;     // //
			this->board[1][5] = 1;
			break;
		}
	case 4:
		{
			this->board[0][4] = 1;       //
			this->board[1][4] = 1;      // //
			this->board[2][5] = 1;         //
			this->board[1][5] = 1;
			break;
		}
	default:
		break;
	}
}

shape3Cl::shape3Cl ()
{ 
	this->id_spec = 1; 
	this->board[0][4] = 1;      ////
	this->board[0][5] = 1;     ////
	this->board[1][4] = 1;     
	this->board[1][5] = 1;
}

shape4Cl::shape4Cl ()
{ 
	this->id_spec = rand() % 4 + 1; 
	switch (this->id_spec)
	{
	case 1:
		{
			this->board[0][5] = 1;    
			this->board[1][4] = 1;        //
			this->board[1][5] = 1;     // // //
			this->board[1][6] = 1;
			break;
		}
	case 2:
		{
			this->board[0][5] = 1;          //
			this->board[1][4] = 1;       // //
			this->board[1][5] = 1;          //
			this->board[2][5] = 1;
			break;
		}
	case 3:
		{
			this->board[0][5] = 1;        
			this->board[0][6] = 1;      // // //
			this->board[0][4] = 1;        //
			this->board[1][5] = 1;
			break;
		}
	case 4:
		{
			this->board[0][4] = 1;    // 
			this->board[1][4] = 1;    // //
			this->board[1][4] = 1;    //     
			this->board[1][5] = 1;
			break;
		}
	default:
		break;
	}
}

shape5Cl::shape5Cl ()
{ 
	this->id_spec = rand() % 2 + 1; 
	switch (this->id_spec)
	{
	case 1:
		{
			this->board[0][5] = 1;     // 
			this->board[1][5] = 1;     //
			this->board[2][5] = 1;     //
			this->board[3][5] = 1;     //
			break;
		}
	case 2:
		{
			this->board[0][3] = 1;     
			this->board[0][4] = 1;     // // // //
			this->board[0][5] = 1;     
			this->board[0][6] = 1;
			break;
		}
	default:
		break;
	}
}

