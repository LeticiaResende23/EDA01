#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;

    scanf("%d",&n);

    int vetor[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    int menorvalor = vetor[0];
    int indice = 0;

    for(int i=0;i<n;i++){
        if(vetor[i]<menorvalor){
            menorvalor = vetor[i];
            indice=i;
        }
    }
    printf("%d",indice);
}

