#include <stdio.h>
// Original: 1.24s
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int n, a[100], num = 0;
        scanf("%d", &n);
        scanf("%d", &a[0]);
        int min = a[0];
        for (int j = 1; j < n; ++j) {
            scanf("%d", &a[j]);
            if (min > a[j]) {
                min = a[j];
            }
        }
        for (int j = 0; j < n; ++j) {
            if (a[j] > min) {
                num++;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}