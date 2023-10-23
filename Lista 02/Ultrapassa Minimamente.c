#include <stdio.h>

void limite(int *r, int m, int soma){
    
    if(*r == '\0'){
        return;
    }
    soma = *r + soma;

    if(soma > m){
        soma = 0;
        limite(r+1 , m, soma);
        printf("%i\n", *r);

    } else{
        
        limite(r+1 ,m , soma);
    }

}

int main(){
    
    int r[1000];
    int t;
    int m; 
    int soma = 0; 
    int i=0;

    while(scanf("%i", &t)){
        
        if(t == 0){
            break;
        }
        else{
            
            r[i] = t;
            i++;
        }
    }

    scanf("%i", &m);

    limite(r, m, soma);

    return 0;
}