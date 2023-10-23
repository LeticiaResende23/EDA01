#include <stdio.h>

int par(char *string){
    
    if(string[2] == '\0'){
        return 0;
    }
    else if(*string == string[2]){
        return par(string + 1) + 1;
    }
    
    else{
        return par(string + 1);
        
    }
   
        
}

int main(){
    char string[201];
    scanf("%s", string);
    printf("%i", par(string));
    printf("\n");
    return 0 ;
}