#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int len;
    char carac;
    int pos;
} Drink;

void merge(Drink *drinks, int i, int a, int b)
{
    Drink vetorAux[a - i + 1];
    int Ai = i, Bi = b + 1, AUXi = 0, l;

    while (Ai <= b && Bi <= a)
    {
        if (drinks[Ai].len >= drinks[Bi].len)
        {
            vetorAux[AUXi++] = drinks[Ai++];
        }
        else{
            vetorAux[AUXi++] = drinks[Bi++];
        }
    }

    while (Ai <= b)
    {
        vetorAux[AUXi++] = drinks[Ai++];
    }
    while (Bi <= a)
    {
        vetorAux[AUXi++] = drinks[Bi++];
    }

    int v = 0;
    for (l = i; l <= a; ++l)
    {
        drinks[l] = vetorAux[v++];
        
    }
}

void mergeSort(Drink *drinks, int i, int j)
{
    if (i >= j)
        return;

    int meio = i + (j - i) / 2;
    mergeSort(drinks, i, meio);
    mergeSort(drinks, meio + 1, j);
    merge(drinks, i, j, meio);
}

int main()

{
    Drink drinks[100000];
    int i = 0, sent = 0, j;
    char input[100001];
    scanf("%s", input);

    int y = strlen(input);
    
    for (i = 0; i < y; i++)
    {

        drinks[sent].carac = input[i];
        drinks[sent].pos = i;

        while (input[i] == drinks[sent].carac)
        {
            drinks[sent].len++;
            i++;
        }
        i--;
        sent++;
    }

    mergeSort(&drinks[0], 0, sent);

    for (j = 0; j < sent; j++)
    {
        printf("%i %c %i\n", drinks[j].len, drinks[j].carac, drinks[j].pos);
        
    }

    return 0;
}