/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int venus = 0;
    char palavra[31];
    char nome[6] = "venus"; 

 
    while(scanf("%s", palavra) != EOF){
      
     if(strcmp(palavra, nome) == 0)
         venus++;
      }

  if(venus >= 1)
    printf("Leonardo Cicero Marciano\n");
  else
    printf("none\n");

    return 0;
}
