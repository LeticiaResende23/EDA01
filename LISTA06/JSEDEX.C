#include <stdio.h>

int main(){
    int diametro, altura, largura, profundidade;
    scanf("%i", &diametro);
    scanf("%i%i%i", &altura, &largura, &profundidade);
    
    if(altura >= diametro && largura >= diametro && profundidade >= diametro){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
    
}