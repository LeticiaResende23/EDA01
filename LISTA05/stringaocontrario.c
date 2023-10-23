#include<stdio.h>

void reverse(char *string){
    if(*string == '\0'){
        return;
        
    }else{
        reverse(string + 1);
        printf("%c", *string);
        
    }
}

int main(){
    char string[501];
    scanf("%s", string);
    reverse(string);
    return 0;
}