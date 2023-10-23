#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct Queue {
	Item *vetor;
	int size, front, begin, end;
}Queue;

int create_queue(Queue *fila, int r) {
    
	fila->size = r;
	fila->vetor = malloc(sizeof(Item) * r);
	if (fila->vetor == NULL) return 0;
	fila->front = 0;
	fila->begin = -1;
	fila->end = 0;
	return 1;
	
}

int is_empty(Queue *fila) {

	return fila->front == 0;
}

Item front(Queue *fila){
    
	return fila->vetor[(fila->begin+1) % fila->size];
}

int enqueue(Queue *fila, Item e) {
	if (fila->end == fila->begin) return 0;
	fila->vetor[fila->end++] = e;
	fila->end = fila->end % fila->size;
	fila->front++;
	return 1;
}

void dequeue(Queue *fila) {
	fila->front--;
	fila->begin = (fila->begin+1) % fila->size;
}

int queueofone(Queue *fila) {
	return fila->front == 1;
}

int main() {
    
	int n, ind = 0;
	scanf("%d", &n);
	
	Queue cards, dcards;
	create_queue(&cards, n);
	create_queue(&dcards, n-1);
	
	for (int i = 1; i <= n; i++)
		enqueue(&cards, i);
		
	while (queueofone(&cards) != 1) {
		Item tempo = front(&cards);
		dequeue(&cards);
		
		if (ind % 2 == 0)
			enqueue(&dcards, tempo);
		else
			enqueue(&cards, tempo);
		ind++;
	}
	printf("Cartas descartadas: %d", front(&dcards));
	
	for (int i = 1; i < n-1; i++)
		printf(", %d", dcards.vetor[i]);
		
	printf("\nCarta restante: %d\n", front(&cards));
	
	return 0;
}