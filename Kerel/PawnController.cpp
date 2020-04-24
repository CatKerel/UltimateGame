#include "PawnController.h"

PawnController::PawnController()
{
}

Pawn* PawnController::getPawn()
{
	return pawn;
}

void PawnController::move(vector3 pos)
{
}

void PawnController::rotate(vector3 rot)
{
	pawn->setRotation(pawn->getRotation() + rot);
}
