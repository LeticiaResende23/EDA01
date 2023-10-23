#include <stdio.h>
int main(){
    int T, N, P, T_P = 0, a;
    
    while(scanf("%i %i", &T, &N)){
        if(T == 0){
            break;
        }
        for(int i = 0; i < T; i++){
            scanf("%*s %i", &P);
            T_P += P;
        }
    a = (N * 3) - T_P;
    printf("%i\n", a);
    T_P = 0;   
    
    }       
     
    return 0;
}