#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int trocar_valores_variavel() {
	int a = 10, b = 20;

	printf("Antes: a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("Depois: a = %d, b = %d\n", a, b);

	return 0;
}