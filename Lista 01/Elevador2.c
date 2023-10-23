#include <stdio.h>

int main() {
    
    int n, c, s, e, pessoas = 0, excedeu = 0;
    scanf("%i %i", &n, &c);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &e);
        pessoas -= s; 
        pessoas += e; 
        if (pessoas > c) {
            excedeu = 1;
        }
    }
    if (excedeu) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}