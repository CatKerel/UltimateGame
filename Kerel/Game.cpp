#include "Game.h"

Game::Game()
{
	// Create the system object.
	System = new SystemClass;
}

bool Game::Initialize()
{ 
	vector3 O = { 70, 0, 0 };
	Actor* a = new Actor(O, O, 1.f, 4);
	a->setModel(L"../Kerel/data/0.dds", "../Kerel/data/0.txt");
	Object.push_back(a);

	vector3 A = { -70, 0, 0 };
	Actor* b = new Actor(A, O, 1.f, 1);
	b->setModel(L"../Kerel/data/crate/0.dds", "../Kerel/data/crate/0.txt");
	Object.push_back(b);

	Actor* ñ = new Actor(A, O, 1.f, 4);
	ñ->setModel(L"../Kerel/data/0.dds", "../Kerel/data/0.txt");
	Object.push_back(ñ);

	// Initialize and run the system object.
	bool result = System->Initialize(Object);
	if (result) {
		System->Run();
	}
	return result;
}

void Game::Shutdown()
{
	// Shutdown and release the system object.
	System->Shutdown();
	delete System;
	System = 0;
}