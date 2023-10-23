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
   int count = 0, consulta = 0, t;
   char ansiedade[3];
   
   
   for(int i = 0; i < 10; i++){
       t = scanf("%s", ansiedade);
       if(t == 1){
        if((tolower (ansiedade[0]) == 's' && tolower(ansiedade[1]) == 'i' && tolower (ansiedade[2]) == 'm') 
        || (tolower (ansiedade[0]) == 'n' && tolower (ansiedade[1]) == 'a' && tolower (ansiedade[2]) == 'o'))
{
            if((tolower (ansiedade[0]) == 's' && tolower(ansiedade[1]) == 'i' && tolower (ansiedade[2]) == 'm')){
                count++;
            }
        }
        else
            i--;
        
        if(i == 9 && count >= 2){
            consulta++;
            count = 0;
            i = -1;
        }
        else if(i == 9){
            count = 0;
            i = -1;
        }
       } 
       else if(t == - 1 && i != 0)
        i --;
       else
        break;
       }

   
printf("%d\n", consulta);
}

   

