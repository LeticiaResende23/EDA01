#include <stdio.h>

//Se N≥101, então f91(N)=N−10.
//Se N≤100, então f91(N)=f91(f91(N+11)).

int f(int n){
    
    if(n >= 101){
        return n-10;
    }
    if(n <= 100){
        return f(f(n+11));
    }
}

int main(){

    int n = 0;
    int c = 0;

    while(scanf("%i", &n) != EOF){
        if(n==0){
            break;
        }else{
            c = f(n);
            printf("f91(%i) = %i\n", n,c);
        }
    }

    return 0;
}
