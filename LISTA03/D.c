#include <stdio.h>

int soma_dosdigitos(char *n, int soma){
    if(*n == '\0'){
        return soma;
    }
    
    else{
         soma += (*n - '0');
         return soma_dosdigitos(n + 1, soma);
         
    }
} 

int main(){
    char n[14];
    scanf("%s", n);
    printf("%d\n", soma_dosdigitos(n, 0));
    return 0;
}