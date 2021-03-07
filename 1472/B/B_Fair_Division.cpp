#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    int a[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        bool can = true;
        bool alo = false;
        int noe = 0;
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[j]);
            if (a[j] == 1) {
                can = !can;
                alo = true;
            } else {
                noe++;
            }
        }
        printf(can && (alo || (!alo && (noe % 2 == 0))) ? "YES\n" : "NO\n");
    }
    return 0;
}