#include <stdio.h>
#include <string.h>

void moveX(char *string){  

    if(*string == '\0'){
        return;
    } 
    else if(*string == 'x'){
        
        printf("%c", *string);
        moveX(string+1);
        
    } else {
        moveX(string+1);
    }
}

void printoutros(char *string){  

    if(*string == '\0'){
        return;
        
    } else if(*string != 'x'){
        printf("%c", *string);
        printoutros(string+1);
        
    } else {
        printoutros(string+1);
    }
}

int main(){

    char string[1000];

    scanf("%s", string);

    printoutros(string);
    moveX(string);
    
    printf("\n");

    return 0;
}