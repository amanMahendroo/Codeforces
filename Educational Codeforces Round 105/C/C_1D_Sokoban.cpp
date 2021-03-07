#include <iostream>

using namespace std;

long a[200000], b[200000], num[200000];
int fpa = 0, fpb = 0;
int n, m;
    
long numBefore(int k) {
    if (num[k] != -1) {
        return num[k];
    }
    if (k < 0) {
        return 0;
    }
    if (b[k] < 0) {
        return 0;
    }
    long c = 0;
    for (int i = fpa; i < n; ++i) {
        if (a[i] < b[k])
            ++c;
        else
            break;
    }
    num[k] = c + numBefore(k - 1);
    return num[k];
}

long numAfter(int k) {
    if (num[k] != -1) {
        return num[k];
    }
    if (k >= m) {
        return 0;
    }
    if (b[k] > 0) {
        return 0;
    }
    long c = 0;
    for (int i = fpa - 1; i >= 0; --i) {
        if (a[i] > b[k])
            ++c;
        else 
            break;
    }
    num[k] = c + numAfter(k + 1);
    return num[k];
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < 200000; ++i) {
        num[i] = -1;
    }
    for (int i = 0; i < t; ++i) {
        fpa = 0; fpb = 0;
        scanf("%d %d", &n, &m);
        for (int j = 0; j < n; ++j) {
            scanf("%ld", &a[j]);
            if (a[j] < 0) {
                fpa = j + 1;
            }
        }
        for (int j = 0; j < m; ++j) {
            scanf("%ld", &b[j]);
            if (b[j] < 0) {
                fpb = j + 1;
            }
        }
        long maxR = 0;
        if (fpb < n) {
            for (int j = fpb; j < m; ++j) {
                for (int k = j; k < m; ++k) {
                    if (numBefore(k) >= b[k] - b[j]) {
                        if (maxR < b[k] - b[j]) {
                            maxR = b[k] - b[j];
                        }
                    } else {
                        break;
                    }
                }
            }
        }
        long maxL = 0;
        if (fpb > 0) {
            for (int j = fpb - 1; j >= 0; --j) {
                for (int k = j; k >= 0; --k) {
                    if (numAfter(k) >= b[k] - b[j]) {
                        if (maxL < b[k] - b[j]) {
                            maxL = b[k] - b[j];
                        }
                    } else {
                        break;
                    }
                }
            }
        }
        printf("%ld\n", (maxL + maxR));
    }
    return 0;
}