#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int quantidade, numero1, numero2, ans = 0;
    char operacao;
    scanf("%i", &quantidade);

    while (quantidade)
    {
        ++ans;
        scanf("%i", &numero1);
        
        for(int i = 0; i < quantidade-1; ++i){
            
            scanf("%c", &operacao);
            scanf("%i", &numero2);
            if(operacao == '+'){
                numero1 += numero2;
            }else if(operacao == '-'){
                numero1 -= numero2;
            }
        }
        printf("Teste %i\n%i\n\n", ans, numero1);
        scanf("%i", &quantidade);
    }
    return 0;
}
