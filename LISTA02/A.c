#include<stdio.h>

int main(){
    
    int T;
    int c1, c2, c3;
    int soma;
    
    scanf("%d%d%d",&c1,&c2,&c3);
    
    soma = c1 + c2 + c3;
    
    scanf("%d",&T);
    
    if(soma == T)
    {
        printf("Acertou\n");
        
    }
    else
        printf("Errou\n");
        
    
    return 0;
}