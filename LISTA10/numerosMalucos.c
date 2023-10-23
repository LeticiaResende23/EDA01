#include <stdio.h>
#include <stdlib.h>
#define lesseq(a, b) (a <= b)

int * merge2(int *vetor1, int a1, int b1, int *vetor2, int a2, int b2) {
    
	int *vetor3 = malloc(sizeof(int) * ((b1 - a1 + 1) + (b2 - a2 + 1)));
	int vetor3i = 0, vetor1i = a1, vetor2i = a2;
	
	while (lesseq(vetor1i, b1) && lesseq(vetor2i, b2)) {
		if (lesseq(vetor1[vetor1i], vetor2[vetor2i]))
			vetor3[vetor3i++] = vetor1[vetor1i++];
		else
			vetor3[vetor3i++] = vetor2[vetor2i++];
	}
	while (lesseq(vetor1i, b1))
		vetor3[vetor3i++] = vetor1[vetor1i++];
		
	while (lesseq(vetor2i, b2))
		vetor3[vetor3i++] = vetor2[vetor2i++];
	return vetor3;
}

void merge(int *vetor, int a, int b, int c) {
    
	int *vetor2 = malloc(sizeof(int) * (c - a + 1));
	int l = 0, i = a, j = b+1;
	
	while (lesseq(i, b) && lesseq(j, c)) {
		if (lesseq(vetor[i], vetor[j]))
			vetor2[l++] = vetor[i++];
		else
			vetor2[l++] = vetor[j++];
	}
	while (lesseq(i, b))
		vetor2[l++] = vetor[i++];
		
	while (lesseq(j, c))
		vetor2[l++] = vetor[j++];
	l = 0;
	
	for (int i = a; i <= c; i++)
		vetor[i] = vetor2[l++];
	free(vetor2);
}

void mergesort(int *vetor, int a, int b) {
    
	if (a >= b) return;
	int r = a + (b- a) / 2;
	mergesort(vetor, a, r);
	mergesort(vetor, r+1, b);
	merge(vetor, a, r, b);
}

int binarysearch(int *vetor, int a, int b, int n) {
	if (a <= b) {
		int k = a + (b - a) / 2;
		if (vetor[k] == n)
			return k;
		else if (vetor[k] > n)
			return binarysearch(vetor,a, k-1, n);
		else
			return binarysearch(vetor, k+1, b, n);
	}
	
	return -1;
}

int clean(int *vetor, int a, int b) {
	int j = a;
	
	for (int i = 1; i <= b; i++) {
		if (vetor[i] != vetor[j])
			vetor[++j] = vetor[i];
	}
	return j;
	
}

int main() {
	int n, *x, *nmu, j = -1;
	scanf("%i", &n);
	
	x = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++)
		scanf("%i", &x[i]);
		
	mergesort(x, 0, n-1);
	int b = clean(x, 0, n-1);
	
	if (b % 2 == 0)
		x[++b] = 1000000000;
	nmu = malloc(sizeof(int) * (b / 2 + 1));
	
	for (int i = 0; i < b; i += 2) {
		nmu[++j] = x[i] + x[i+1];
		if (binarysearch(x, 0, b, nmu[j]) != -1)
			j--;
	}
	int *fx = merge2(x, 0, b, nmu, 0, j); free(nmu); free(x);
	
	for (int i = 0; i <= b+j+1; i += 4)
		printf("%i\n", fx[i]);
		
		
	printf("Elementos: %i\n", b+j+2);
	return 0;
}