#include <stdio.h>

long long int fibona[81] = {0};

long int fibonacci(int n){
    
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;

    }
    if(fibona[n] != 0){
        return fibona[n];
    } 
    
    fibona[n] = fibonacci(n-1) + fibonacci(n - 2);
    return fibona[n];
}