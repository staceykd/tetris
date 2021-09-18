#pragma once
#define Pieces_H
#include <windows.h>

class Pieces {
public:
	/*
		Pieces_Type:产生的方块类型
		Pieces_Roation:方块的旋转
		apt：产生方块的初始点
		Num_Points:每个方块的初始点数目
	*/
	Pieces(int Pieces_type,int Pieces_Roation,const POINT *apt,int Num_Points = 4);
	~Pieces();

	//function declaration

	//得到方块的基本属性
	inline int getWidth()const { return width; };
	inline int getHeight()const { return height; };
	inline int getNpoints()const { return Npoints; };
	inline int getID()const { return Id; };
	inline int getRoation()const { return Roation; };

	//得到底部、左边、右边的方块个数
	
	void getBody(POINT *apt)const;
	void getSkirt(POINT* apt)const;
	void getLeftSide(POINT* apt)const;
	void getRightSide(POINT* apt)const;

	//判断某一个位置的方块是否存在
	bool isPointExites(int x, int y)const;

	//绘制方块
	void print()const;
protected:
	POINT* body;
	int width;
	int height;
	int Roation;
	int Id;
	int Npoints;
};