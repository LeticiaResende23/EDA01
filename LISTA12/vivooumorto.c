#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct Queue {
	Item *vetor;
	int size, front, begin, end;
}Queue;


int create_queue(Queue *fila, int r) {
    
	fila->size = r;
	fila->vetor = malloc(r * sizeof(Item));
	fila->front = 0;
	fila->begin = -1;
	fila->end = 0;
	return 1;
}

int is_empty(Queue *fila) {
    
	return fila->front == 0;
}

Item front(Queue *fila) {
    
	return fila->vetor[(fila->begin+1) % fila->size];
}

int enqueue(Queue *fila, Item e) {
    
	if (fila->front >= fila->size) return 0;
	fila->vetor[fila->end++] = e;
	fila->end = fila->end % fila->size;
	fila->front++;
	return 1;
}

void dequeue(Queue *fila) {
    
	fila->front--;
	fila->begin = (fila->begin+1) % fila->size;

    
}

int main() {
    
	int t, m, numteste = 1;
	scanf("%d %d", &t, &m);
	Queue fila;
	
	while (t !=0 || m != 0) {
		int xt;
		create_queue(&fila, t);
		for (int i = 0; i < t; i++) {
			scanf("%d", &xt);
			enqueue(&fila, xt);
		}
		
		int j, ai;
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &t, &j);
			
			for(int l = 0; l < t; l++) {
				Item tempo = front(&fila);
				dequeue(&fila);
				scanf("%d", &ai);
				
				if (ai == j)
				enqueue(&fila, tempo);
			}
		}
		
		printf("Teste %d\n", numteste++);
		printf("%d\n", front(&fila));
		scanf("%d %d", &t, &m);
	}
	
	return 0;
}