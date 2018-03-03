#pragma once
#pragma warning(default:4716) // Отключено предупреждение
#include <iostream>
#include <cliext\vector>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <tuple>

using cliext::vector;

struct Coordinate // хранилище координат нулевого элемента
{
	int x;
	int y;
}; // объект


ref class Game
{
	const int size = 4; // размер игрового поля

public:

	int x, y;
	int **GameMap; // игровая карта
	int **RightMap; // правильная (эталонная) итоговая карта
	int SpaceX, SpaceY;

	Game();
	~Game();

	int CoordinateToPosition(int y, int x)
	{
		return y * size + x;
	}

	std::tuple<int, int> PositionToCoordinate(int position)
	{

		int x = position % size;
		int y = position / size;

		return std::make_tuple(y, x);
	}


	void Start() {
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++) {
				RightMap[y][x] = CoordinateToPosition(y, x) + 1;
			}

		}
		SpaceX = size - 1;
		SpaceY = size - 1;
		RightMap[SpaceX][SpaceY] = 0; // нулевой элемент в нижний правый угол
	}
	int GetNumber(int position) // передаем номер позиции и возвращаем номер кнопки
	{
		int x, y;
		auto coord = PositionToCoordinate(position);
		y = std::get<0>(coord);
		x = std::get<1>(coord);
		if (x < 0 || x >= size) return 0; // Проверка на непревышение массива
		if (y < 0 || y >= size) return 0;
		// передать в массив координаты
		return GameMap[y][x];
	}
	void Shift(int position) // Перемещение выбранной кнопки на пустую по клику
	{
		int x, y;
		auto coord = PositionToCoordinate(position);
		x = std::get<0>(coord);
		y = std::get<1>(coord);
		if (abs(SpaceX - x) + abs(SpaceY - y) != 1) { // Если кликнутая кнопка находится рядом с пустой кнопкой
			return;
		}
		GameMap[SpaceY][SpaceX] = GameMap[y][x];	// Меняем местами кнопку с цифрой на нулевую
		GameMap[y][x] = 0;
		SpaceX = x;
		SpaceY = y;

	}
	void CreateGameMap() {			//Создание ировой карты (заполнение случайными числами)
		{
			srand(static_cast<int>(time(NULL)));
			int Limit = size * size;
			vector<int> Temporary; // временный массив из которого будем брать значения в игровую карту
			for (int i = 0; i < Limit; i++)
				Temporary.push_back(i);
			int Value;
			for (int y = 0; y < size; y++)
			{
				for (int x = 0; x < size; x++)
				{
					Value = rand() % Limit--;
					GameMap[y][x] = Temporary[Value];
					if (Temporary[Value] == 0) // сохраняем координаты нулевого элемента
					{
						SpaceX = x;
						SpaceY = y;
					}
					Temporary.erase(Temporary.begin() + Value);
				}
			}
		}
	}
	bool CheckMap() {
		{
			if (GameMap == RightMap)
				return true;
			return false;
		}
	}
};

