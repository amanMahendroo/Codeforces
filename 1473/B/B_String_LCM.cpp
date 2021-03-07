#include <iostream>
#include <string.h>

using namespace std;

int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
int lcm(int a, int b) { 
    return (a / gcd(a, b)) * b; 
} 

void expand(char s[], char t[]) {
    for (int i = 0; i < 2 * strlen(s); i++) {
        if (s[i % strlen(s)] != t[i % strlen(t)]) {
            printf("-1\n");
            return;
        }
    }
    for (int i = 0; i < lcm(strlen(s), strlen(t)) / strlen(s); ++i) {
        printf("%s", s);
    }
    printf("\n");
}

int main() {
    int n;
    char s[20], t[20];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s %s", &s, &t);
        if (strlen(s) > strlen(t)) {
            expand(s, t);
        } else {
            expand(t, s);
        }
    }
    return 0;
}

// baba
// ba