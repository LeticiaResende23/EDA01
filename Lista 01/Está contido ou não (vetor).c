#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    int atual;
    int x;

    scanf("%d",&n);

    int vetor[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    scanf("%d",&x);
    int p=0;

    for(int i=0;i<n;i++){
        if(vetor[i]==x){
           p=1;
        }
    }

    if(p==1){
        printf("pertence");
    }else{
        printf("nao pertence");
    }

}
