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
	bool is_full(int x, int y, const Pieces& piece); //�жϽ������Ƿ����㹻�Ŀռ���ý������ķ���
	void remove(const Pieces piece); //����һ������
	void creat_new_piece(const Pieces piece); //����һ���µķ���

	bool is_hit_bottom()const;
	bool is_hit_left()const;
	bool is_hit_right()const; //�ж��Ƿ������˽���ĵײ�����ߺ��ұ�

	bool is_place(int x, int y, const Pieces& piece); //�ж�ĳ��λ���Ƿ��ܷ��÷���

	void clear(); //���һ�����ˣ���ô��ɾ����һ�в��������ͼ����

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
