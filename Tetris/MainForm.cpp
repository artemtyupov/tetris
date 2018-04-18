#include "MainForm.h"
#include "game.h"

using namespace Tetris;

//Загрузка формы
System::Void MainForm::MainForm_Load(System::Object^  sender, System::EventArgs^  e)
{

}

//Начало игры
System::Void MainForm::btnPlay_Click(System::Object^  sender, System::EventArgs^  e)
{
	gameCl game;
	game.startGame();
	int result = game.endGame();
	lblScore->Text = Convert::ToString(result);
}

