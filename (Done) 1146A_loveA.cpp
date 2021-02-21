#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[50];
	cin >> s;
	int l = strlen(s);
	int a = 0;

	for (int i = 0; i < l; ++i)
	{
		if (s[i] == 'a')
		{
			a++;
		}
	}

	if (l < 2 * a - 1)
	{
		cout << l;
	} else {
		cout << 2 * a - 1;
	}

	return 0;
}