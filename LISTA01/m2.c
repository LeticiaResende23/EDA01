#include <stdio.h>
#include <string.h>

int main()
{
    int linhas;
    int altura;
    int largura;
    int colunas;
    
    char açao;

    scanf("%i", &linhas);
    char text[linhas][1001];

    for (int i = 0; i < linhas; i++){
        scanf(" %1001[^\n]", text[i]);
    }

    scanf("%i %i", &altura, &largura);

    while (scanf(" %c", &act) > 0){
        if (açao == 'j'){
            if (linhas > altura){
                altura++;
            }
        }
        else if (act == 'k'){
            if (alturat > 1){
                altura--;
            }
        }

        colunas = strlen(text[altura - 1]);

        if (largura > colunas){
            printf("%i %i %c\n", altura, colunas, text[altura - 1][colunas - 1]);
        }
        else
            printf("%i %i %c\n", altura, largura, text[altura - 1][largura - 1]);
    }
    return 0;
}