#include <iostream>

using namespace std;

int main() {
    int n, m;
    char a[200000], b[200000];
    int left[200000], right[200000];
    scanf("%d %d", &n, &m);
    scanf("%s", &a);
    scanf("%s", &b);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[j]) {
            left[j] = i;
            ++j;
        }
        if (j >= m) {
            break;
        }
    }
    j = m - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == b[j]) {
            right[j] = i;
            --j;
        }
        if (j < 0) {
            break;
        }
    }
    
    int max = 0;
    for (int i = 1; i < m; ++i) {
        if (right[i] - left[i - 1] > max) {
            max = right[i] - left[i - 1];
        }
    }
    printf("%d", max);
    return 0;
}

// abbcccddddeeeee
// abcde