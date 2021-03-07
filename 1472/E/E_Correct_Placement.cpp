#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    long h[200000], w[200000];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        for (int j = 0; j < n; ++j) {
            scanf("%ld %ld", &h[j], &w[j]);
            
        }
    }
    return 0;
}