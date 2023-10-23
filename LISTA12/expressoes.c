#include <stdio.h>
#include <stdlib.h>

typedef char Item;
typedef struct Pilha {
	Item *vetor;
	int size, topo;
}Pilha;

int create_pilha(Pilha *p, int r) {
    
	p->size = r;
	p->vetor = malloc(r * sizeof(Item));
	p->topo = 0;
	return 1;
}

int empilha(Pilha *p, Item e) {
	if (p->topo == p->size) return 0;
	p->vetor[p->topo++] = e;
	return 1;
}

void pull(Pilha *p) {
	p->topo--;
}


Item topo(Pilha *p) {
	return p->vetor[p->topo-1];
}


int is_empty(Pilha *p) {
	return p->topo == 0;
}


int symmetric_stri(char *vetor) {
    
	int i = 0;
	
	while (vetor[i] != '\0')
		i++;
	Pilha p;
	create_pilha(&p, i);
	i = 0;
	
	while (vetor[i] != '\0') {
		if (vetor[i] == '(' || vetor[i] == '[' || vetor[i] == '{') {
			empilha(&p, vetor[i]);
			i++;
		}
		
		else if (vetor[i] == ')') {
			if (topo(&p) == '(') {
				pull(&p);
				i++;
				
			} 
			else 
				return 0;
				
		} 
		
		else if (vetor[i] == ']') {
			if (topo(&p) == '[') {
				pull(&p);
				i++;
			} 
			
			else 
				return 0;
		}
		
		else if (vetor[i] == '}') {
			if (topo(&p) == '{') {
				pull(&p);
				i++;
			} 
			
			else 
				return 0;
		}
	}
	
	if (is_empty(&p))
		return 1;
	return 0;
}

int main() {
    
	int l;
	char s[100001];
	scanf("%d",&l);
	
	for (int i = 0; i < l; i++) {
		scanf("%s", s);
		printf("%c\n", symmetric_stri(s) == 1 ? 'S' : 'N');
	}
	

	return 0;
}
