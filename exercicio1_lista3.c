#include <stdio.h>
#include <stdlib.h>

void calcular_fatorial(int num, int *resultado) {
	if (num == 0 || num == 1) {
		*resultado = 1; // caso base
	}
	else {
		int temp;
		calcular_fatorial(num - 1, &temp); // chama recursivamente
		*resultado = num * temp; // multiplica pelo valor atual
	}
}


int recursao_fatorial() {
	int n, resultado;

	printf("Digite um valor maior que 0: ");
	scanf_s("%d", &n);

	calcular_fatorial(n, &resultado); // passa o endereço para guardar o resultado

	printf("%d! = %d\n", n, resultado);

	return 0;
}