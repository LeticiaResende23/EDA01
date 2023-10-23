#include <stdio.h>

void pares(char *string, int cont){

    if (*(string+2) == '\0'){
        
        printf("%i\n",cont);
        return;
    }
    else if(*string == *(string+2)){
        
        cont = cont + 1;
        pares(string+1, cont);
        
    }else {
        
        pares(string+1, cont);
    }

}

int main(){

    char string[201];
    int cont = 0;

    scanf("%s", &string);

    pares(string,cont);

    return 0;
}