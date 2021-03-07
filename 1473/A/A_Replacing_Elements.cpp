#include <iostream>

using namespace std;

int main() {
    int t;
    int n, d;
    int a[100];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d", &n, &d);
        scanf("%d", &a[0]);
        scanf("%d", &a[1]);
        int min1, min2;
        if (a[0] > a[1]) {
            min1 = a[1];
            min2 = a[0];
        } else {
            min1 = a[0];
            min2 = a[1];
        }
        int flag = 1;
        for (int j = 2; j < n; ++j) {
            scanf("%d", &a[j]);
            if (a[j] > d) {
                flag = 0;
            }
            if (a[j] < min2) {
                if (a[j] < min1) {
                    min2 = min1;
                    min1 = a[j];
                } else {
                    min2 = a[j];
                }
            }
        }
        if (min1 + min2 <= d || flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}