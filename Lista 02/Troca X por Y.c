#include <stdio.h>

void trocaXY(char *string){
    
    if (*string == '\0'){
        return;
    }
    
    else if(*string == 'x'){
        
        *string = 'y';
        trocaXY(string+1);
        
    } else{
        
        trocaXY(string+1);
    }
}

int main(){
    
    char string[81];

    scanf("%s", string);

    trocaXY(string);

    printf("%s \n",string);

    return 0;

}