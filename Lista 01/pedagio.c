#include<stdio.h>

int main(){
    int l;
    int d;

    int k;
    int p;
    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);
    printf("%d\n",((k * l) + (l/d) * p));

    return 0;
}