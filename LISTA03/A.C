#include <stdio.h>


 int mal(int num){
    if(num >= 101){
        return num -10;
    }
    else{
        mal(mal(num + 11));
    }
 }  


 int main(void){
    
    int n, resultado;
    
    while(scanf("%i",&n)!= EOF){
        
        if(n == 0){
        break;
        }
        else{
            resultado = mal(n);
            printf("f91(%i) = %d\n",n, resultado);
        }
    
        
    }
    return 0;
}