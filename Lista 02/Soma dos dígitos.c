#include <stdio.h>

int soma(char *numero, int r){
    
    if(*numero == '\0'){
        return r;
    }
    else{
        
        r += (*numero -'0');
        return soma(numero+1, r);
    }
}

int main(void){
    
    char n[12];

    scanf(" %s", n);
    printf("%i\n", soma(n,0));
    
    return 0;
}