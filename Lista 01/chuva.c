#include <stdio.h>

int main() {
    
    int n, i, j;
    scanf("%d", &n);
    int mapa1[n][n], mapa2[n][n], acumulado[n][n];


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mapa1[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mapa2[i][j]);
            acumulado[i][j] = mapa1[i][j] + mapa2[i][j];
        }
    }

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", acumulado[i][j]);
        }
        printf("\n");
    }

    return 0;
}