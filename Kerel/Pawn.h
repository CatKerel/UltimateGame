#pragma once
#include "Actor.h"
class PawnController;
class Pawn :
	public Actor
{
public:

	//friend PawnController;

	PawnController* getPawnController();

protected:

	PawnController* pawnController = 0;
};

