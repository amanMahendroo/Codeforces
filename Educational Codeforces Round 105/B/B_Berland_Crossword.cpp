#include <iostream>

using namespace std;

int main() {
    int t;
    int n, u, d, r, l;
    scanf("%d", &t);
    int left = 0, right = 0;
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d %d %d", &n, &u, &r, &d, &l);
        int u2 = u, r2 = r, d2 = d, l2 = l;
        bool possible = true;
        if (u > 0 && r > 0) {
            --u; --r;
        }
        if (r > 0 && d > 0) {
            --r; --d;
        }
        if (d > 0 && l > 0) {
            --d; --l;
        }
        if (l > 0 && u > 0) {
            --l; --u;
        }
        possible = (u < n - 1) && (d < n - 1) && (r < n - 1) && (l < n - 1);
        bool possible2 = true;
        if (u2 > 0 && l2 > 0) {
            --u2; --l2;
        }
        if (l2 > 0 && d2 > 0) {
            --l2; --d2;
        }
        if (d2 > 0 && r2 > 0) {
            --d2; --r2;
        }
        if (r2 > 0 && u2 > 0) {
            --r2; --u2;
        }
        possible2 = (u2 < n - 1) && (d2 < n - 1) && (r2 < n - 1) && (l2 < n - 1);
        if (possible || possible2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

// b w w w
// b     b
// b     b
// b b w w
// u r d l
// 1 2 2 4
// 0 0 0 3
// 0 1 0 2

// 4 1 0 0