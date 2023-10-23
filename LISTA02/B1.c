#include<stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int conta, resultado, i;
    scanf("%d", &conta);

    for (i = 0; i < parcelas -1; i++){
        scanf("%d", &resultado);
        if (op == '+'){
            conta += resultado;
        }
        else if (op == '-'){
                conta -= resultado;
            }
    }
    return conta;
}

