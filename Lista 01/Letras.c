#include <stdio.h>
#include <string.h>

int main() {
    char letra;
    char texto[1001];
    int total_palavras = 0, palavras_com_letra = 0;
    float porcentagem;

    scanf("%c\n", &letra);  
    fgets(texto, 1001, stdin); 

    
    texto[strcspn(texto, "\n")] = '\0';

    int i = 0;
    while (texto[i] != '\0') {
        while (texto[i] == ' ') {
            i++;
        }

        int tem_letra = 0;
        while (texto[i] != '\0' && texto[i] != ' ') {
            if (texto[i] == letra) {
                tem_letra = 1;
            }
            i++;
        }

        if (tem_letra) {
            palavras_com_letra++;
        }
        total_palavras++;
    }

    if (total_palavras > 0) {
        porcentagem = (float) palavras_com_letra / total_palavras * 100;
        printf("%.1f\n", porcentagem);
    } else {
        printf("0.0\n");
    }

    return 0;
}