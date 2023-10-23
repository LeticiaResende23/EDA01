#include <stdio.h>

typedef struct Item {
	int left;
	int right;
}Item;

int main() {
    
	int l;
	while (scanf("%d", &l) != EOF) {
		int tot = 0;
		Item boot[31];
		
		for (int i = 0; i < 31; i++) {
			boot[i].right = 0;
			boot[i].left = 0;
		} 
		
		for (int i = 0; i < l; i++) {
			int size;
			char side;
			scanf("%d %c", &size, &side);
			
			if (side == 'E')
				boot[size-30].left++;
			else
				boot[size-30].right++;
		}
		
		for (int i = 0; i < 31; i++) {
			if (boot[i].left == 0 || boot[i].right == 0) continue;
			
			else {
				if (boot[i].left >= boot[i].right)
					tot += boot[i].right;
				else
					tot += boot[i].left;
			}
			
			
		}
		
		printf("%d\n", tot);
	}
	
	
	return 0;
}