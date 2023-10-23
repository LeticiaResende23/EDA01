#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    celula *a = le->prox;
    while(a!= NULL && a->dado != x){
        a = a->prox;
    }
    return a;
}

celula *busca_rec (celula *le, int x){
    if(le == NULL || le->dado == x){
        return le;
    }else{
        busca_rec(le->prox,x);
    }
}