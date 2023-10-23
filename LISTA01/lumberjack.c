#include <stdio.h>

int main()
{

    int linhas;
    int galhos;
    char matriz[2000][11];

    scanf("%d%d", &linhas, &galhos);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (j == 4 || j == 5 || j == 6)
            {
                matriz[i][j] = '|';
            }
            else
            {
                matriz[i][j] = ' ';
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
            matriz[linhaG - 1][7] = '-';
            matriz[linhaG - 1][8] = '-';
            matriz[linhaG - 1][9] = '-';
        }
        else
        {
            matriz[linhaG - 1][1] = '-';
            matriz[linhaG - 1][2] = '-';
            matriz[linhaG - 1][3] = '-';
        }
    }

    char lenhadorL;
    scanf(" %c", &lenhadorL);
    if (lenhadorL == 'D')
    {
        matriz[0][8] = 'L';
        matriz[1][8] = 'L';
    }
    else
    {
        matriz[0][2] = 'L';
        matriz[1][2] = 'L';
    }

    int lenhadorA = 0;
    printf("~~~~~~~~~~~\n");
    for (int i = lenhadorA + 4; i >= 0; i--)
    {
        for (int j = 0; j < 11; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    printf("~~~~~~~~~~~\n");

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
                if (matriz[lenhadorA][4] == '>')
                {
                    lenhadorA++;
                    if (matriz[lenhadorA + 1][3] == '-')
                    {
                        printf("**morreu**\n");
                        return 0;
                    }
                    matriz[lenhadorA + 1][2] = 'L';
                }
                else
                {
                    matriz[lenhadorA][4] = '>';
                }
            }
            else if (lenhadorL == 'D')
            {
                if (matriz[lenhadorA][6] == '<')
                {
                    lenhadorA++;
                    if (matriz[lenhadorA + 1][7] == '-')
                    {
                        printf("**morreu**\n");
                        return 0;
                    }
                    matriz[lenhadorA + 1][8] = 'L';
                }
                else
                {
                    matriz[lenhadorA][6] = '<';
                }
            }
        }
        if (acao == 'T')
        {
            if (lenhadorL == 'D')
            {
                if (matriz[lenhadorA][2] == '-' || matriz[lenhadorA + 1][2] == '-')
                {
                    printf("**beep**\n");
                    continue;
                }
                else
                {
                    matriz[lenhadorA + 1][2] = 'L';
                    matriz[lenhadorA][2] = 'L';
                    matriz[lenhadorA + 1][8] = ' ';
                    matriz[lenhadorA][8] = ' ';
                    lenhadorL = 'E';
                }
            }
            else if (lenhadorL == 'E')
            {
                if (matriz[lenhadorA][8] == '-' || matriz[lenhadorA + 1][8] == '-')
                {
                    printf("**beep**\n");
                    continue;
                }
                else
                {
                    matriz[lenhadorA + 1][2] = ' ';
                    matriz[lenhadorA][2] = ' ';
                    matriz[lenhadorA + 1][8] = 'L';
                    matriz[lenhadorA][8] = 'L';
                    lenhadorL = 'D';
                }
            }
        }
        printf("~~~~~~~~~~~\n");
        for (int i = lenhadorA + 4; i >= lenhadorA; i--)
        {
            for (int j = 0; j < 11; j++)
            {
                if (matriz[i][j] == 0)
                {
                    printf("");
                }
                else
                {
                    printf("%c", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("~~~~~~~~~~~\n");
    }
     printf("\n");
}