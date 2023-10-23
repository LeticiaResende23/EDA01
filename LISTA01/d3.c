#include <stdio.h>
#include <stdlib.h>

int main(){
    int diadeviagem = 1, id, nota, numRest, iddamaiornota, maiornota;

    while(scanf ("%d", &numRest) != EOF){
        scanf("%d %d", &iddamaiornota, &maiornota);
        for(int i = 1; i < numRest; i++){
            scanf("%d %d", &id, &nota);
            if(nota > maiornota ||(nota == maiornota && id < iddamaiornota)) {
                iddamaiornota = id;
                maiornota = nota;
            }

        }

        printf("Dia %d\n%d\n\n", diadeviagem, iddamaiornota);
        diadeviagem++;
    }

    return 0;
}