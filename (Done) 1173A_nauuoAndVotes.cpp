#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if (x == y && z == 0)
	{
		cout << 0;
		return 0;
	}
	if (x - y - z > 0)
	{
		cout << '+';
		return 0;
	}
	if (y - x - z > 0)
	{
		cout << '-';
		return 0;
	}
	cout << '?';
	return 0;
}