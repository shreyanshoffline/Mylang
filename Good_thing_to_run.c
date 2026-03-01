#include <stdlib.h>
#include <stdio.h>

int main(){
	int *x = malloc(1);
	for (int i = 2; i < 100000000000000000; i += 1000000){
		printf("%i\n", i);
		x = (int*)realloc(x, i);
	}
	return 0;
}
