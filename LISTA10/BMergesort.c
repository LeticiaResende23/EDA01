#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define less(a, b) (a < b)

void merge(Item *vetor, int a, int b1, int b2) {
    
	Item *vetor2 = malloc(sizeof(Item) * (b2 - a + 1));
	int l = 0, i = a, j = b1+1;
	while (i <= b1 && j <= b2) {
		if (less(vetor[i], vetor[j]))
			vetor2[l++] = vetor[i++];
		else
			vetor2[l++] = vetor[j++];
	}
	while (i <= b1)
		vetor2[l++] = vetor[i++];
		
	while (j <= b2)
		vetor2[l++] = vetor[j++];
	l = 0;
	
	for (int i = a; i <= b2; i++)
		vetor[i] = vetor2[l++];
}

void mergesort(Item *vetor, int a, int b) {
	if (a >= b) return;
	
	int avg = a + (b - a) / 2;
	mergesort(vetor, a, avg);
	mergesort(vetor, avg+1, b);
	merge(vetor, a, avg, b);
}

int main() {
    
	int n;
	scanf("%i", &n);
	Item lst[n];
	
	for (int i = 0; i < n; i++)
		scanf("%i", &lst[i]);
		
	mergesort(lst, 0, n-1);	
	printf("%i", lst[0]);
	
	for (int i = 1; i < n; i++)
		printf("%i", lst[i]);
		
	printf("\n");
	return 0;
}