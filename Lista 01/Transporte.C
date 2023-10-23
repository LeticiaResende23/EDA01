#include<stdio.h>


int main(){
    
    int A;
    int B;
    int C;
    int X;
    int Y;
    int Z;
    
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &X, &Y, &Z);
    
    int numLarg = X/A;
    int numComp = Y/B;
    int numAlt = Z/C;
    
    int maximoCont = numLarg * numComp *numAlt;
    
    printf("%i\n", maximoCont);
    return 0;
    
}