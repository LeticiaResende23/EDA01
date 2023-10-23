#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcao(char s[1000], int n){
    
    int soma = 0;
    for(int i=strlen(s)-1;i >= 0; i--){
        soma += (s[i] - 48);
    }

    char s2[1000];
    sprintf(s2,"%d",soma);

    if(soma > 9){
        return funcao(s2, n + 1);  
    } else if(soma<9){
        return 0;
    } else {
        return n;
    }
}

int main(){
    
    char s[1000];
    int n = 1;
    int x = 0;

    while(scanf("%s", &s) != EOF){
        if(s[0]== '0'){
            break;
        }else{
            x = funcao(s,n);
        }

        if(x==0){
            printf("%s is not a multiple of 9.\n", s);
        }else {
            printf("%s is a multiple of 9 and has 9-degree %d.\n",s,x);
            }
    }

    return 0;
}