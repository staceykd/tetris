#pragma once
#define Draw_H
#include "Pieces.h"
#include <windows.h>

class Draw
{
public:
	/*
	HDC:上下文句柄
	HWND：窗口句柄
	Block_Size：方块大小
	Width：窗口宽度
	Height：窗口长度
	*/
	Draw(HDC Hdc,HWND Hwnd,int Block_Size,int Width,int Height);
	~Draw();

	void Draw_Block(int x,int y);

	void Draw_Intereface();

	void Draw_Text(TCHAR *szText,int x,int y) const;
	
	void Draw_Score(int score,int x,int y) const;
	void Draw_Speed(int speed, int x, int y) const;
	void Draw_NextPiece(Pieces& piece, int x, int y);

protected:
	/*
	Rect:windows.h中的矩形量
	*/
	HDC Hdc;
	HWND Hwnd;
	int Width;
	int Height;
	RECT Rect;

};








