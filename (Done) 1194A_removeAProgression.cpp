#include <iostream>

using namespace std;

int perform() {
	long long int n, x;
	scanf("%lld %lld", &n, &x);
	cout << x * 2 << endl;
	return 0;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		perform();
	}

	return 0;
}