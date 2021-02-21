#include <iostream>

// 2 1 3 2 3 3 1 3 1 2 - arr
// 1 1 0 0 0 0 0 0 0 0 - buff
// 8 - ans

using namespace std;

int main()
{
	int n, k;
	int c = 0, ans = 0;
	scanf("%d %d", &n, &k);
	int arr[1000], buff[1000];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < k; ++i)
	{
		buff[i] = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		if (buff[arr[i] - 1] == 1)
		{
			buff[arr[i] - 1] = 0;
			ans += 2;
		} else {
			buff[arr[i] - 1] = 1;
		}
	}

	for (int i = 0; i < k; ++i)
	{
		if (buff[i] == 1)
		{
			++c;
		}
	}

	c = (c + 1) / 2;

	cout << ans + c;

	return 0;
}