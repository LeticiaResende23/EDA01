#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le){
    celula *a = le->prox;

    while(a != NULL){
        printf("%d -> ",a->dado);
        a = a->prox;
    }

    if(a == NULL){
        printf("NULL\n");
    }
}

void imprime_rec(celula *le) {
    celula *a = le->prox;

    if(a == NULL){
        printf("NULL\n");

    }else{
        printf("%d -> ", a->dado);
        imprime_rec(a);
    }
}
