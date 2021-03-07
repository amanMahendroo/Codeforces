#include <iostream>

using namespace std;

int num(int n) {
    int c = 1;
    while (!(n % 2)) {
        n /= 2;
        c *= 2;
    }
    return c;
}

int main() {
    int t;
    int n, w, h;
    // long a[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d", &w, &h, &n);
        if (num(w) * num(h) >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}