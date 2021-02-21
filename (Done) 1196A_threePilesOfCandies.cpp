#include <iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		cout << (a + b + c) / 2 << endl;
	}
	return 0;
}