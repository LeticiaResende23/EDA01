#include <stdio.h>

int main() {
    
    int n, m, i, j, max_linha, max_coluna, total = 0;
    int produtividade[101][101];

   
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &produtividade[i][j]);
        }
    }

  
    max_linha = 0;
    for (i = 0; i < n; i++) {
        int soma = 0;
        for (j = 0; j < m; j++) {
            soma += produtividade[i][j];
        }
        if (soma > max_linha) {
            max_linha = soma;
        }
    }

    max_coluna = 0;
    for (j = 0; j < m; j++) {
        int soma = 0;
        for (i = 0; i < n; i++) {
            soma += produtividade[i][j];
        }
        if (soma > max_coluna) {
            max_coluna = soma;
        }
    }

   
    if (max_linha > max_coluna) {
        total = max_linha;
    } else {
        total = max_coluna;
    }

  
    printf("%d\n", total);

    return 0;
}