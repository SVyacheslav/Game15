#pragma once
#pragma warning(default:4716) // ��������� ��������������
#include <iostream>
#include <cliext\vector>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <tuple>

using cliext::vector;

struct Coordinate // ��������� ��������� �������� ��������
{
	int x;
	int y;
}; // ������


ref class Game
{
	const int size = 4; // ������ �������� ����

public:

	int x, y;
	int **GameMap; // ������� �����
	int **RightMap; // ���������� (���������) �������� �����
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
		RightMap[SpaceX][SpaceY] = 0; // ������� ������� � ������ ������ ����
	}
	int GetNumber(int position) // �������� ����� ������� � ���������� ����� ������
	{
		int x, y;
		auto coord = PositionToCoordinate(position);
		y = std::get<0>(coord);
		x = std::get<1>(coord);
		if (x < 0 || x >= size) return 0; // �������� �� ������������ �������
		if (y < 0 || y >= size) return 0;
		// �������� � ������ ����������
		return GameMap[y][x];
	}
	void Shift(int position) // ����������� ��������� ������ �� ������ �� �����
	{
		int x, y;
		auto coord = PositionToCoordinate(position);
		x = std::get<0>(coord);
		y = std::get<1>(coord);
		if (abs(SpaceX - x) + abs(SpaceY - y) != 1) { // ���� ��������� ������ ��������� ����� � ������ �������
			return;
		}
		GameMap[SpaceY][SpaceX] = GameMap[y][x];	// ������ ������� ������ � ������ �� �������
		GameMap[y][x] = 0;
		SpaceX = x;
		SpaceY = y;

	}
	void CreateGameMap() {			//�������� ������ ����� (���������� ���������� �������)
		{
			srand(static_cast<int>(time(NULL)));
			int Limit = size * size;
			vector<int> Temporary; // ��������� ������ �� �������� ����� ����� �������� � ������� �����
			for (int i = 0; i < Limit; i++)
				Temporary.push_back(i);
			int Value;
			for (int y = 0; y < size; y++)
			{
				for (int x = 0; x < size; x++)
				{
					Value = rand() % Limit--;
					GameMap[y][x] = Temporary[Value];
					if (Temporary[Value] == 0) // ��������� ���������� �������� ��������
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

