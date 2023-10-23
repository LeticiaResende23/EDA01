#include <stdio.h>

void trocando(char *string){
    
    if(*string == '\0'){
        return;
    }
    else if(*string == 'x' ){
        printf("y");
        return trocando(string + 1);
    }
    
    else{
        printf("%c", *string);
        return trocando(string + 1);
        
    }
}

int main(){
    char string[81];
    scanf("%s", string);
    trocando(string);
    printf("\n");
    return 0 ;
}