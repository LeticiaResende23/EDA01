#include <stdio.h>
#include <stdlib.h>

#define Max 1001

typedef struct no
{
   int v[Max];
   int prox;
}no;

void iniciaPilha(no *topo){
    topo->prox=0;
}

int empilha(no *topo, int item){
    if(topo->prox >= Max) return 0;
    topo->v[topo->prox] = item;
    topo->prox++;
    return 1;  
}

int pilhaVazia(no *topo){
    if(topo->prox == 0) return 1;
    return 0;
}

int desempilha(no *topo){
    if(pilhaVazia(topo) == 1) return -1;
    topo->prox--;
    return(topo->v[topo->prox]);
}

int itemFinal(no *topo){
    if(pilhaVazia(topo)) return-1;
    return (topo->v[topo->prox-1]);
}

int main(){
    int n;
    int quantidade;
    int parade[Max];
    no aux;

    while(scanf("%d", &quantidade) == 1 && quantidade != 0){
        iniciaPilha(&aux);
        int j = 0, k = 0;
        int carro = 1;
        int not = 0;

        while( j <quantidade && scanf(" %d",&n)==1){
            while(itemFinal(&aux) == carro){
                parade[k++] = desempilha(&aux);
                carro++;
            }
            if(n == carro){
                parade[k++] = n;
                carro++;
            }
            else{
                empilha(&aux,n);
            }
            j++;
        }

        while(k < j)
             parade[k++] = desempilha(&aux);

        for(j = 0; j < k; j++){
            for(int i = j+1; i<k; i++){
                if(parade[i] < parade[j])
                    not++;
            }
        }

        if(not == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}