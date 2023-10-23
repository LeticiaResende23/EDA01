#include<stdio.h>

int main()
{
    int n;
    int valores;
    int soma = 0;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &valores);
        soma += valores;
    }
    
    scanf("%d", &valores);
    
    if(soma == valores)
    {
        printf("Acertou\n");
        
    }
    else{
        printf("Errou\n");
    }
    
}