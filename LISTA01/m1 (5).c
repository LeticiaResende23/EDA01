#include <stdio.h>

int main()
{

    int linhas;
    int galhos;
    char arvore[2000][11];

    scanf("%d%d", &linhas, &galhos);

    for (int i = 0; i < linhas; i++)
        {
        for (int j = 0; j < 11; j++)
        {
            if (j == 4 || j == 5 || j == 6)
            {
                arvore[i][j] = '|';
            }
            else
            {
                arvore[i][j] = ' ';
            }
        }
    }

    int linhaG;
    char ladoG;
    for (int i = 0; i < galhos; i++)
    {
        scanf(" %c%d", &ladoG, &linhaG);
        // printf("'%i'\n", ladoG);

        if (ladoG == 'D')
        {
            arvore[linhaG - 1][7] = '-';
            arvore[linhaG - 1][8] = '-';
            arvore[linhaG - 1][9] = '-';
        }
        else
        {
            arvore[linhaG - 1][1] = '-';
            arvore[linhaG - 1][2] = '-';
            arvore[linhaG - 1][3] = '-';
        }
    }

    char lenhadorL;
    scanf(" %c", &lenhadorL);
    if (lenhadorL == 'D')
    {
        arvore[0][8] = 'L';
        arvore[1][8] = 'L';
    }
    else
    {
        arvore[0][2] = 'L';
        arvore[1][2] = 'L';
    }

    int lenhadorA = 0;
    printf("~~~\n");
    for (int i = lenhadorA + 4; i >= 0; i--)
    {
        for (int j = 0; j < 11; j++)
        {
            printf("%c", arvore[i][j]);
        }
        printf("\n");
    }
    printf("~~~\n");

    char acao;
    while (scanf("%c", &acao) > 0)
    {
        if (acao == '\n')
        {
            continue;
        }
        if (acao == 'B')
        {
            if (lenhadorL == 'E')
            {
                if (arvore[lenhadorA][4] == '>')
                {
                    lenhadorA++;
                    if (arvore[lenhadorA + 1][3] == '-')
                    {
                        printf("morreu\n");
                        return 0;
                    }
                    arvore[lenhadorA + 1][2] = 'L';
                }
                else
                {
                    arvore[lenhadorA][4] = '>';
                }
            }
            else if (lenhadorL == 'D')
            {
                if (arvore[lenhadorA][6] == '<')
                {
                    lenhadorA++;
                    if (arvore[lenhadorA + 1][7] == '-')
                    {
                        printf("morreu\n");
                        return 0;
                    }
                    arvore[lenhadorA + 1][8] = 'L';
                }
                else
                {
                    arvore[lenhadorA][6] = '<';
                }
            }
        }
        if (acao == 'T')
        {
            if (lenhadorL == 'D')
            {
                if (arvore[lenhadorA][2] == '-' || arvore[lenhadorA + 1][2] == '-')
                {
                    printf("beep\n");
                    continue;
                }
                else
                {
                    arvore[lenhadorA + 1][2] = 'L';
                    arvore[lenhadorA][2] = 'L';
                    arvore[lenhadorA + 1][8] = ' ';
                    arvore[lenhadorA][8] = ' ';
                    lenhadorL = 'E';
                }
            }
            else if (lenhadorL == 'E')
            {
                if (arvore[lenhadorA][8] == '-' || arvore[lenhadorA + 1][8] == '-')
                {
                    printf("beep\n");
                    continue;
                }
                else
                {
                    arvore[lenhadorA + 1][2] = ' ';
                    arvore[lenhadorA][2] = ' ';
                    arvore[lenhadorA + 1][8] = 'L';
                    arvore[lenhadorA][8] = 'L';
                    lenhadorL = 'D';
                }
            }
        }
        printf("~~~\n");
        for (int i = lenhadorA + 4; i >= lenhadorA; i--)
        {
            for (int j = 0; j < 11; j++)
            {
                printf("%c", arvore[i][j]);
            }
            printf("\n");
        }
        printf("~~~\n");
    }
}