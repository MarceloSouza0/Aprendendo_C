#include <stdio.h>
#include <stdlib.h>


int variavel_inteira() {
	int variavel = 10;
	int endereco_variavel = &variavel;
	printf("Valor da variavel: %d\n", variavel);
	printf("Endereco da variavel: %p\n", endereco_variavel);

}