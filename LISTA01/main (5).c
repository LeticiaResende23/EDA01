/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, r, m, i, acum, conjunto = 1;
    scanf("%i", &n);
    while(n != 0){
        acum = 0;
        printf( "Teste %d\n", conjunto);
        conjunto++;
        for(i = 0; i < n; i++){
            scanf("%i %i", &i, &m);
            acum += r - m;
            printf("%i\n", acum);
        }
        printf("\n");
        scanf("%i", &n);
    }
    return 0;
}
