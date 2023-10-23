#include <stdio.h>
#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;

void selection(int *vetor, int a, int b){
    
    for(int i = a; i < b; i++){
        int m = i;
        
        for(int a = i +1; a <=b; a++){
            
            if(less(vetor[a],vetor[m])){
                m = a;
            }
        }
        exch(vetor[i],vetor[m]);
    }
    
}

int main(){
    
    int vetor[1001];
    int tamanho = 0;

    while(scanf("%i", &vetor[tamanho]) != EOF){
        tamanho++;
    }

    selection(vetor, 0, tamanho -1);

    for(int b = 0; b < tamanho; b++){
        printf("%i ", vetor[b]);        
    }
    
    printf("\n");
    return 0;
}