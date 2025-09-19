#include <stdio.h>
#include <stdlib.h>

//imprimir todos os numeros de n ate 0

void imprimir(int x) {
	if (x == 0)
		printf("%d ", x);
	else {
		printf("%d ", x);
		imprimir(x - 1);
	}
}

int aprendendo_recursao() {

	int n;

	printf("Digite um valor maior que 0: ");
	scanf_s("%d", &n);

	imprimir(n);


	return 0;
}