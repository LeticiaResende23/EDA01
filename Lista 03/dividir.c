#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2){
    celula *a = l->prox;
    celula *b1 = l1;
    celula *b2 = l2;

    while(a != NULL){
        if(a->dado % 2 == 0){
            b2->prox = a;
            b2 = b2->prox;
        } else {
            b1->prox = a;
            b1 = b1->prox;
        }
        a = a->prox;
    }
    b1->prox = NULL;
    b2->prox = NULL;
}