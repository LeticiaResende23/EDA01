#include <stdio.h>
#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;
#define lessExch(A, B) if(less(B, A)){exch(A, B);}

void inser(int *vetor, int a, int b){

    for(int i = b; i> a; i--){
        lessExch(vetor[i-1],vetor[i]);   
    }

    for(int i = a + 2; i<= b;i++){
        int m = vetor[i];
        int r = i;

        while(less(m,vetor[r-1])){
            vetor[r] =vetor[r-1];
            r--;
        }

        vetor[r] = m;
    }
}

int main(){
    
    int *vetor;
    int tamanho = 0;
    vetor = malloc(sizeof(int)*50000);

    while(scanf("%d", &vetor[tamanho]) != EOF){
        tamanho++;
    }

    inser(vetor, 0, tamanho -1);

    for(int l = 0; l < tamanho; l++){
        printf("%d ", vetor[l]);        
    }
    
    printf("\n");
    

    return 0;
}