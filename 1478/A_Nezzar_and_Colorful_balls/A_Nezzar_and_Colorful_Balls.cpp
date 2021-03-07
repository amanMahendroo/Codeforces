#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    int a[100];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        scanf("%d", &a[0]);
        int c = 1, max = 1;
        for (int j = 1; j < n; ++j) {
            scanf("%d", &a[j]);
            if (a[j] == a[j - 1]) {
                ++c;
            } else {
                c = 1;
            }
            if (c > max) {
                max = c;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}