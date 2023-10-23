#include <stdio.h>

typedef struct {
	int key;
	char word[16];
}Item;
#define key(a) (a.key)
#define less(a, b) (key(a) < key(b))
#define exch(a, b) {Item t = a; a = b; b = t;}

int binarysearch(Item *vetor, int a, int b, int c) {
	if (a <= b) {
		int mean = a + (b - a) / 2;
		if (key(vetor[mean]) == c)
			return mean;
		else if (c < key(vetor[mean]))
			return binarysearch(vetor, a, mean-1, c);
		else
			return binarysearch(vetor, mean+1, b, c);
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
    
	int n; 
	int tempo;
	scanf("%i", &n);
	Item lst[n];
	
	for (int i = 0; i < n; i++)
		scanf("%i %s", &lst[i].key, lst[i].word);
	selectionsort(lst, 0, n-1);
	while (scanf("%i", &tempo) != EOF) {
		int variaveis = binarysearch(lst, 0, n-1, tempo);
		printf("%s\n", variaveis == -1 ? "undefined" : lst[variaveis].word);
	}
	return 0;
}