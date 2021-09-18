#pragma once
#define Pieces_H
#include <windows.h>

class Pieces {
public:
	/*
		Pieces_Type:�����ķ�������
		Pieces_Roation:�������ת
		apt����������ĳ�ʼ��
		Num_Points:ÿ������ĳ�ʼ����Ŀ
	*/
	Pieces(int Pieces_type,int Pieces_Roation,const POINT *apt,int Num_Points = 4);
	~Pieces();

	//function declaration

	//�õ�����Ļ�������
	inline int getWidth()const { return width; };
	inline int getHeight()const { return height; };
	inline int getNpoints()const { return Npoints; };
	inline int getID()const { return Id; };
	inline int getRoation()const { return Roation; };

	//�õ��ײ�����ߡ��ұߵķ������
	
	void getBody(POINT *apt)const;
	void getSkirt(POINT* apt)const;
	void getLeftSide(POINT* apt)const;
	void getRightSide(POINT* apt)const;

	//�ж�ĳһ��λ�õķ����Ƿ����
	bool isPointExites(int x, int y)const;

	//���Ʒ���
	void print()const;
protected:
	POINT* body;
	int width;
	int height;
	int Roation;
	int Id;
	int Npoints;
};