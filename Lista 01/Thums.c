#include <stdio.h>

int main() {
    
    int b, i;
    scanf("%i", &b);

    for (i = 1; i <= b; i++) {
        if (i % 2 == 1) {
            printf("THUMS THUMS THUMS\n");
        } else {
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }

    return 0;
}
