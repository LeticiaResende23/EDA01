#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define swap(A, B) Traducao t = A; A = B; B = t;

typedef struct{
    char palavra_pt[81];
    char palavra_japao[81];
}Traducao;


int ordem_alfab(char* palavra1, char* palavra2){
    if(*palavra1 == '\0' && *palavra2 == '\0'){
        return 3;
    }
    else if(*palavra1 == '\0'){
        return 0;
    }
    else if(*palavra2 == '\0'){
        return 1;
    }
    if(*palavra1 < *palavra2){
        return 0;
    }
    else if(*palavra1 > *palavra2){
        return 1;
    }
    else{
        ordem_alfab(palavra1 + 1, palavra2 + 1);
    }
}

int busca_bin(Traducao* vetor, int a, int b, char* palavra){
    if(b < a){
        return (-1);
    }
    
    int meio = (b + a)/2;

    if(ordem_alfab(palavra, vetor[meio].palavra_japao) == 0){
        return busca_bin(vetor, a, meio - 1, palavra);
    }
    else if(ordem_alfab(palavra, vetor[meio].palavra_japao) == 1){
        return busca_bin(vetor, meio + 1, b, palavra);
    }
    else{
        return meio;
    }

}

int separa(Traducao* vetor, int a, int b){
    if(a >= b) return b;
    Traducao p = vetor[b];
    int i = a - 1, j = b;
  
    for(;;){
        while(ordem_alfab(p.palavra_japao, vetor[++i].palavra_japao) == 1);
        while(ordem_alfab(p.palavra_japao, vetor[--j].palavra_japao) == 0) if(j == a) break;

        if(i >= j) break;
        swap(vetor[i], vetor[j]);
    }

    swap(vetor[b], vetor[i]);
    return i;

}

void quicksort(Traducao* vetor, int a, int b){
    if(a >= b) return;
 
    swap(vetor[b - 1], vetor[(a + b)/2]); 
    if(ordem_alfab(vetor[a].palavra_japao, vetor[b - 1].palavra_japao) != 0){
        swap(vetor[a], vetor[b - 1])
    }
    if(ordem_alfab(vetor[a].palavra_japao, vetor[b].palavra_japao) != 0){
        swap(vetor[a], vetor[b]);
    }
    if(ordem_alfab(vetor[b - 1].palavra_japao, vetor[b].palavra_japao) != 0){
        swap(vetor[b - 1], vetor[b]);
    }
    int pivo = separa(vetor, a + 1, b - 1);
    quicksort(vetor, a, pivo - 1);
    quicksort(vetor, pivo + 1, b);



}

int main(void){
    int l, c, n;
    scanf("%i", &l);
    
    for(int _ = 0; _ < l; _++){
        scanf("%i %i", &c, &n);
        Traducao* vetor = malloc(sizeof(Traducao)*c);
        char musica[81];

        for(int i = 0; i < c; i++){
            scanf(" %s", vetor[i].palavra_japao);
            scanf(" %[^\n]%*c", vetor[i].palavra_pt);
        }
        quicksort(vetor, 0, c - 1);
        for(int i = 0; i < n; i++){
            scanf(" %[^\n]", musica);
            
            int r = 0;
            for(;;){
                char palavra[81];
                int j = 0;
                while(musica[r] != ' ' && musica[r] != '\0'){
                    palavra[j] = musica[r];
                    j++;
                    r++;
                }
                if(musica[r] == ' '){
                    palavra[j++] = '\0';
                    int resposta = busca_bin(vetor, 0, c - 1, palavra);
                    if(resposta == -1){
                        printf("%s ", palavra);
                    }
                    else{
                        printf("%s ", vetor[resposta].palavra_pt);
                    }
                    r++;
                    continue;
                }
                else if(musica[r] == '\0'){
                    palavra[j++] = '\0';
                    int resposta = busca_bin(vetor, 0, c - 1, palavra);
                    
                    if(resposta == -1) printf("%s ", palavra);
                    else printf("%s\n", vetor[resposta].palavra_pt);
                    break;
                }
            }



        }
   
    }

    return 0;

}
