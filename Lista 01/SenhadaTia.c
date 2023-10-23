#include <stdio.h>
#include <ctype.h>

int main() {
    
    int N, M, A, K, i, lowercase = 0, uppercase = 0, numbers = 0;
    char password[1001];

    scanf("%i %i %i %i %s", &N, &M, &A, &K, password);
  
    for (i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            numbers++;
        } else if (islower(password[i])) {
            lowercase++;
        } else if (isupper(password[i])) {
            uppercase++;
        }
    }
    
    if (i >= N && lowercase >= M && uppercase >= A && numbers >= K) {
        printf("Ok =/\n");
    } else {
        printf("Ufa :)\n");
    }
    
    return 0;
}