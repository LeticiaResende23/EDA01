#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiple(char *n, int i, int S, int G){
    
    if(n[0]=='0' && n[1]=='\0'){
        return 0;}
        
        

    if(G == 1 && i<strlen(n)){
        S+=(n[i]-48);
        i=i+1;
        return multiple(n, i, S, G);}
        

    if(i==strlen(n) && S == 9){
        
        printf("%s is a multiple of 9 and has 9-degree %d.\n", n, G);
        scanf("%s", n);
        S = 0;
        G = 0;
        i = 0;
        return multiple(n, i, S, G);
        
    }
    else if(S < 9 && S != 0){
        
        printf("%s is not a multiple of 9.\n", n, G);
        scanf("%s", n);
        i = 0;
        S = 0;
        G = 0;
        return multiple(n, i, S, G);}
        G++;
        int result = S;
        S = result%10 + (result/10)%10 + (result/100)%10 + (result/1000)%10;
        return multiple(n, i, S, G);
        
}


int main() {
    
    char n[1000];
    int i = 0; 
    int S = 0; 
    int G = 1;
    scanf("%s", n);
    multiple(n, i, S, G);
    return 0;
    
}
