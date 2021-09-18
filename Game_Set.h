#pragma once
#define Game_H
#include "Pieces.h"
#include "Level_Changed.h"
#include "Pieces_Set.h"
#include "Draw.h"

class Game {
public:
	Game(Draw&da);
	~Game();

	void restart();
	void pause();
	void update();

	bool key_press();
	bool is_GameOver();

	void repaint();

protected:
	inline void GameOver_show() const
	{
		da.Draw_Text((TCHAR * )TEXT("GAME OVER"), 4, 12);
		//da.Draw_Text(TEXT("GAME OVER"), 4, 12);
		da.Draw_Text((TCHAR*)TEXT("Press ENTER To Continue"), 3, 10);
	}
	
	inline void GamePause_show() const 
	{
		da.Draw_Text((TCHAR*)TEXT("Pause"), 4, 12);
		da.Draw_Text((TCHAR*)TEXT("Press ENTER To Continue"), 3, 10);
	}

	//Level* level;
	Draw& da;
	bool paused;
};	