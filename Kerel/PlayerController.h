#pragma once
#include "PawnController.h"
class PlayerController :
	public PawnController
{
public:
	Pawn* getPawn();

	void move(vector3 pos);

	void rotate(vector3 rot);
};

