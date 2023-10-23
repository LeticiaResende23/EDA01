#include<stdio.h>

int main(){
    
    int xm, xr, ym, yr;
    scanf("%d %d %d %d", &xm, &ym, &xr, &yr); 
    int distX = xm - xr;
    int distY = ym - yr;

    if(distX < 0){
        distX = -distX;
    }
    if(distY < 0){
        distY = -distY;
    }
    int c = (distX + distY);
    printf("%d\n", c);
    
    return 0;
}