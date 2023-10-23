#include <stdio.h>

int main() {
    int c, a, b, i, aldov, betov, teste=0;

    scanf("%i", &c);

    while (c != 0) {
        aldov = 0;
        betov = 0;
    
        for (i = 0; i < c; i++) {
            scanf("%d %d", &a, &b);
            aldov += a;
            betov += b;
        }

        teste++;
        printf("Teste %d\n", teste);
   
        if (aldov > betov) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }

        scanf("%i", &c);
    }
    return 0;
}