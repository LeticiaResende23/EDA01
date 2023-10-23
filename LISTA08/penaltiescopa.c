#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int i, lan = 1, fim = 0, chut1 = n, chut2 = n, g1 = 0, g2= 0;
    
    char tA[n + 1];
    char tB[n + 1];
    scanf(" %s %s", tA, tB);
    

    for(i = 0; i < n; i++){
        if(tA[i] == 'o'){
            g1++;
        }
        chut1 --;
        if(g1 > g2 + chut2 || g2 > g1 + chut1){
            fim = lan;
            break;
            
        }
        lan ++;
        if(tB[i] == 'o'){
            g2++;
        }
        chut2 --;
        if(g1 > g2 + chut2 || g2 > g1 + chut1){
            fim = lan;
            break;
        }
        
        lan ++;
        
    }
    
    if(fim == 0){
        printf("Empate\n");
    }
    else{
        printf("%d\n", fim);
    }
    
    return 0;
}