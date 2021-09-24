#pragma once
#include "Draw.h"
#include "Pieces_Set.h"
#include <windows.h>

class level {
public:
	level(Draw& da, int width = 10, int heigh = 20);
	~level();

	void drawboard()const;
	bool rotating();
	bool move(int xdistance, int ydistance);

	bool update();
	bool is_gameover();

	void Speed()const;
	void score_display()const;
	void next_pieces_display()const;

protected:
	bool is_full(int x, int y, const Pieces& piece); //判断界面内是否有足够的空间放置接下来的方块
	void remove(const Pieces piece); //消除一个方块
	void creat_new_piece(const Pieces piece); //生成一个新的方块

	bool is_hit_bottom()const;
	bool is_hit_left()const;
	bool is_hit_right()const; //判断是否碰到了界面的底部、左边和右边

	bool is_place(int x, int y, const Pieces& piece); //判断某个位置是否能放置方块

	void clear(); //如果一行满了，那么就删除这一行并将这个地图下移

	COLORREF** board;
	Draw& da;
	Pieces_Set piece_set;
	Pieces* current;
	Pieces* next;
	int width;
	int height;
	int POS_x;
	int POS_y;
	int speed;
	double last_time;
	double current_time;
	int score;
};
