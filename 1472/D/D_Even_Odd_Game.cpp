#include <iostream>

using namespace std;

void swap(long *a, long *b) {
    long t = *a;
    *a = *b;
    *b = t;
}

int partition (long arr[], int low, int high) {
    long pivot = arr[high];
    int i = low;
    
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            ++i;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

void quickSort(long arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int t;
    int n;
    long a[200000];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        long diff = 0;
        for (int j = 0; j < n; ++j) {
            scanf("%ld", &a[j]);
            if (a[j] % 2) {
                diff += a[j];
            } else {
                diff -= a[j];
            }
        }
        quickSort(a, 0, n - 1);
        for (int j = n - 1; j >= 0; --j) {
            if ((n - 1 - j) % 2 && (a[j] % 2 == 0)) {
                diff += a[j];
            } else if ((n - j) % 2 && (a[j] % 2 == 1)) {
                diff -= a[j];
            }
        }
        if (diff > 0) {
            printf("Bob\n");
        } else if (diff < 0) {
            printf("Alice\n");
        } else {
            printf("Tie\n");
        }
    }
    return 0;
}