#include <stdio.h>

typedef int Item; // cria um tipo item

#define less(a, b) (a < b)
#define exch(a, b) {Item t = a; a = b; b = t;}
#define cmpexch(a, b) {if (less(b, a)) exch(a, b);}

void bubblesort(Item *vetor, int a, int b) {
    
	for (int i = a; i < b; i++) {
		for (int j = a; j < b-i; j++)
			cmpexch(vetor[j], vetor[j+1]);
	}
}

int main() {
    
	Item l[1000], r = 0;
	
	while(scanf("%d", &l[r]) != EOF)
		r++;
		
	bubblesort(l, 0, r-1);
	printf("%d", l[0]);
	
	for (int i = 1; i < r; i++)
		printf(" %d", l[i]);
		
	printf("\n");
	
	return 0;
}
