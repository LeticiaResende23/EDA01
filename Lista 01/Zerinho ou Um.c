#include <stdio.h>

int main() {
    
    int A;
    int B;
    int C;
    
    scanf("%d %d %d", &A, &B, &C); // lendo os valores que os jogadores escolheu

    if (A != B && A != C) { // jogador A ganhou
        printf("A\n");
    } else if (B != A && B != C) { // jogador B ganhou
        printf("B\n");
    } else if (C != A && C != B) { // jogador C ganhou
        printf("C\n");
    } else { // nenhum jogador ganhou
        printf("empate\n");
    }
    return 0;
}