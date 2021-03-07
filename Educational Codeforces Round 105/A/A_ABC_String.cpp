#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int t;
    char s[50];
    int a = 0, b = 0, c = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        a = 0;
        b = 0;
        c = 0;
        scanf("%s", &s);
        char op = s[0];
        char cl = s[strlen(s) - 1];
        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] == op) {
                ++a;
            } else if (s[j] == cl) {
                ++b;
            } else {
                ++c;
            }
        }
        int cross = 0;
        bool flag = true;
        // printf("%d,%d,%d", a, b, c);
        if (a - b == c) {
            for (int j = 0; s[j] != '\0'; j++) {
                if (s[j] == op) {
                    ++cross;
                } else {
                    --cross;
                }
                if (cross < 0) {
                    flag = false;
                }
            } 
        } else if (b - a == c) {
            for (int j = 0; s[j] != '\0'; j++) {
                if (s[j] == cl) {
                    --cross;
                } else {
                    ++cross;
                }
                if (cross < 0) {
                    flag = false;
                }
            } 
        } else {
            flag = false;
        }
        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}