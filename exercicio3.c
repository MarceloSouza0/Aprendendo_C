#include <stdio.h>
#include <stdlib.h>

struct endereco {
	char rua[40];
	int numero;
	char cidade[40];
};

int struct_endereco() {
	struct endereco ENDERECO;

	printf("Rua: ");
	fgets(ENDERECO.rua, 40, stdin);

	printf("Numero: ");
	scanf_s("%d", &ENDERECO.numero);

	getchar(); // Limpar o buffer do teclado

	printf("Cidade: ");
	fgets(ENDERECO.cidade, 40, stdin);

	printf("\n--- DADOS ---\n");
	printf("Rua: %s", ENDERECO.rua);
	printf("Numero: %d\n", ENDERECO.numero);
	printf("Cidade: %s", ENDERECO.cidade);


	return 0;
}