#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char str[101];
    struct no *prox;
} no;

typedef struct{
    int x;
    no *n;
}pilha;

no* criaPilha(){
    no *nova = malloc(sizeof(no));
    nova->prox = NULL;
    return nova;
}

int empilha(pilha *topo, char *string){

    no *nova = malloc(sizeof(no));
    if(nova == NULL) return 0;

    nova->prox = topo->n->prox;
    topo->n->prox = nova;
    
    strcpy(nova->str,string);
    return 1;
}

int desempilha(no *topo, char *string){

    if(topo->prox == NULL) return 0;
    
    no *nova = topo->prox;
    topo->prox = nova->prox;
    strcpy(string, nova->str);
    free(nova);
    
    return 1;
}

int main(){

    pilha *novaPilha = malloc(sizeof(pilha));
    novaPilha->n = criaPilha();
    
    char entrada[101], saida[101];
    char comando[10];

    while(scanf("%s", comando) != EOF){
        if(strcmp(comando,"desfazer") == 0){
                if(desempilha(novaPilha->n, saida) == 0){
                    printf("NULL\n");
                }
                else{
                    printf("%s\n", saida);
                }

        }
        if(strcmp(comando, "inserir") == 0){
            char *mensagem = malloc(101);
            scanf(" %[^\n]", mensagem);
            empilha(novaPilha, mensagem);
      
        }

    }
    return 0;
    
}