#include <iostream>

using namespace std;

struct tile
{
	int num;
	char type;
};

int main()
{
	int tiles[27];
	tile Tile;
	int forKoutsu = 3;
	int forShuntsu = 3;
	for (int i = 0; i < 27; ++i)
	{
		tiles[i] = 0;
	}

	for (int i = 0; i < 3; ++i)
	{
		scanf("%d%c", &Tile.num, &Tile.type);
		if (Tile.type == 'm')
		{
			tiles[Tile.num - 1]++;
		} else if (Tile.type == 'p')
		{
			tiles[Tile.num + 8]++;
		} else {
			tiles[Tile.num + 17]++;
		}
	}

	int max = 0;
	for (int i = 0; i < 27; ++i)
	{
		if (tiles[i] > max)
		{
			max = tiles[i];
		}
	}

	forKoutsu -= max;

	int triads = 0;
	for (int i = 0; i < 25; ++i)
	{
		int curZero = 0;
		if (i == 7 || i == 8 || i == 16 || i == 17)
		{
			continue;
		}
		if (tiles[i] > 0)
		{
			curZero++;
		}
		if (tiles[i + 1] > 0)
		{
			curZero++;
		}
		if (tiles[i + 2] > 0)
		{
			curZero++;
		}
		if (curZero > triads)
		{
			triads = curZero;
		}
	}

	forShuntsu -= triads;

	if (forKoutsu < forShuntsu)
	{
		cout << forKoutsu;
	} else {
		cout << forShuntsu;
	}

	return 0;
}