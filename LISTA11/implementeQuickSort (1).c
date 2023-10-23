#include <stdio.h>
#include <stdlib.h>
#define less(a, b) (a < b)
#define exch(a, b) {int t = a; a = b; b = t;}
#define cmpexch(a, b) {if (less(b, a)) exch(a, b); }


int partition(int *vetor, int a, int b) {

	int r = vetor[b], i = a-1, j = b;
	for ( ; ; ) {

		while (less(vetor[++i], r));
		while (less(r, vetor[--j])) if (j == a) break;
		if (i >= j) break;
		exch(vetor[i], vetor[j]);
	}

	exch(vetor[i], vetor[b]);
	return i;
}

void quicksort(int *vetor, int a, int b){

	if (b <= a) return;

	cmpexch(vetor[(a + b)/ 2], vetor[b]);
	cmpexch(vetor[a], vetor[(a + b) / 2]);
	cmpexch(vetor[b], vetor[(a + b) / 2]);

	int j = partition(vetor, a, b);
	quicksort(vetor, a, j-1);
	quicksort(vetor, j+1, b);
}

int main() {

	int n, *num;
	scanf("%d", &num);

	num = malloc(sizeof(int) *n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	quicksort(num, 0, n-1);
	printf("%i", num[0]);

	for (int i = 1; i < n; i++)
		printf(" %i", num[i]);


	printf("\n");
	return 0;


}
