#include <stdio.h>
#include <stdlib.h>

int soma_ponteiros(int *ponteiro1, int *ponteiro2) {
	int soma_ponteiros = *ponteiro1 + *ponteiro2;

	return (soma_ponteiros);
}

int dois_ponteiros() {
	int num1 = 10;
	int num2 = 20;

	int *p1 = &num1;
	int *p2 = &num2;

	int resultado = soma_ponteiros(p1, p2);

	printf("Soma = %d", resultado);

	return 0;
}