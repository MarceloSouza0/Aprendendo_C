#include <stdio.h>
#include <stdlib.h>

void mudar_ponteiro(int *p) {
	*p = 30;

}

int ponteiro_endereco() {
	int variavel = 20;

	int *ponteiro_endereco = &variavel;

	printf("Valor da variavel: %d\n", variavel);
	printf("Endereco da variavel: %p\n", ponteiro_endereco);

	mudar_ponteiro(&variavel);

	printf("Valor da variavel apos mudar ponteiro: %d\n", variavel);

	return 0;
}