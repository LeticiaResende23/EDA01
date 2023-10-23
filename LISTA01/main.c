#include <stdio.h>

int main(){
     
    int N, R[10000], beto, alice, x;


    while (scanf ("%d", &N) == 1)
    {
        if (N == 0)
            return 0;

        for (int i = 0; i < N; i++)
        {
            scanf ("%d", &R[i]);

            if (R[i] == 1)
                beto++;
            else if (R[i] == 0)
                alice++;

        }

        printf ("Alice ganhou %d e Beto ganhou %d\n", alice, beto);
        beto = 0;
        alice = 0;
    }

     return 0;

}
