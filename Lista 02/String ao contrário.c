#include <stdio.h>

void contrar(char *string){
    
    if (*string == '\0'){
        return;
    }
    
    contrar(string + 1);
    printf("%c", *string);
}

int main(){
    
    char string[501];

    scanf("%s", string);

    contrar(string);

    printf("\n");

    return 0;

}