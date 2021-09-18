#pragma once
#include "Pieces.h"


class Pieces_Set {
public:
	enum { Num_Roations = 4, Num_Pieces = 7 };

	Pieces_Set();
	~Pieces_Set();

	Pieces* GetPiece(int ID, int Roations=0) const;

	inline Pieces* GetRandomPiece() const
	{
		return GetPiece(rand() % Num_Pieces, rand() % Num_Roations);
	}

protected:
	Pieces* pieces[Num_Roations][Num_Pieces];
	void RoatePiece();
	void Roate(POINT* apt, int numpoints = 4);
};