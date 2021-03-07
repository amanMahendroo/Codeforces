#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    long long a[200000], b[200000];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        for (int j = 0; j < n; ++j) {
            scanf("%lld", &a[j]);
        }
        long long max = 0;
        for (int j = n - 1; j >= 0; --j) {
            b[j] = a[j];
            if (a[j] + j < n) {
                b[j] += b[j + a[j]];
            }
            if (max < b[j]) {
                max = b[j];
            }
        }
        printf("%lld\n", max);
    }
    return 0;
}