#include <iostream>	

using namespace std;

int main()
{
	int T;
	long long n, s, t;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		scanf("%lld %lld %lld", &n, &s, &t);

		if (s > t)
		{
			cout << n - t + 1 << endl;
		} else {
			cout << n - s + 1 << endl;
		}
	}

	return 0;
}