#include "FormGame15.h"



Game::Game()
{

	GameMap = new int *[4];
	for (int i = 0; i < 4; ++i) {
		GameMap[i] = new int[4];
	}
	RightMap = new int *[4];
	for (int i = 0; i < 4; ++i) {
		RightMap[i] = new int[4];
	}
}

Game::~Game()
{

	for (int i = 0; i < 4; ++i) {
		delete[] GameMap[i];
	}
	delete[] GameMap;
	for (int i = 0; i < 4; ++i) {
		delete[] RightMap[i];
	}
	delete[] RightMap;
}
