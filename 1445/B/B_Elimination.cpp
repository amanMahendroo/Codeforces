#include <iostream>
#define max(a, b) a < b ? b : a

using namespace std;

int main() {
    int t;
    int a, b, c, d;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d\n", max(a + b, c + d));
    }
    return 0;
}