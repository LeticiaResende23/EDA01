#include <stdio.h>
typedef struct {
	int origin, order;
} Item;
#define key(a) (a.order)
#define less(a, b) (key(a) < key(b))
#define exch(a, b) {Item t = a; a = b; b = t;}

int binarysearch(Item *vetor, int a, int b, int c) {
	if (a <= b) {
		int m = a + (b - a) / 2;
		if (vetor[m].order == c)
			return m;
		else if (c < vetor[m].order)
			return binarysearch(vetor, a, m-1, c);
		else
			return binarysearch(vetor, m+1, b, c);
	}
	return -1;
}

void selectionsort(Item *vetor, int a, int b) {
	for (int i = a; i < b; i++) {
		int m = i;
		for (int j = i+1; j <= b; j++) {
			if (less(vetor[j], vetor[m]))
				m = j;
		}
		exch(vetor[m], vetor[i]);
	}
}

int main() {
	unsigned long n, m;
	scanf("%ld %ld", &n, &m);
	int lstm[m];
	Item lstn[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%i", &lstn[i].order);
		lstn[i].origin = i;
	}
	for (int i = 0; i < m; i++)
		scanf("%i", &lstm[i]);
	selectionsort(lstn, 0, n-1);
	
	for (int i = 0; i < m; i++) {
		int variaveis = binarysearch(lstn, 0, n-1, lstm[i]);
		
		if (variaveis == -1){
			printf("%i\n", -1);
		}
		else 
			printf("%i\n", lstn[variaveis].origin);
	}
	return 0;
}