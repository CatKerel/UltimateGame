#pragma once
#include "Pawn.h"
#include "Object.h"

class PawnController : 
	public Object
{
public:
	PawnController();

	Pawn* getPawn();
	void move(vector3 pos);
	void rotate(vector3 rot);

protected:
	Pawn* pawn;
};