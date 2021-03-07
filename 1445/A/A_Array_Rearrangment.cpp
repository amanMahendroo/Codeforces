#include <iostream>

using namespace std;

int main() {
    int t;
    int n, x;
    int a[50], b[50];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d", &n, &x);
        for (int j = 0; j < n; ++j) {
            scanf("%ld", &a[j]);
        }
        for (int j = 0; j < n; ++j) {
            scanf("%ld", &b[n - j - 1]);
        }
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            if (a[j] + b[j] > x) {
                flag = false;
                break;
            }
        }
        printf(flag ? "Yes\n": "No\n");
    }
    return 0;
}