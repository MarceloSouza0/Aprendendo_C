#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	int idade;
	char sexo;
} Pessoa;


int tam = 10;
Pessoa lista[tam];
int quant = 0;

int cadastrarPessoa() {
	if (quant < tam) {
		Pessoa p;
		scanf("%*c"); // Limpa o buffer do teclado

		printf("Digite o nome: ");
		fgets(p.nome, 50, stdin);

		printf("Digite a idade e sexo m ou f: ");
		scanf("%d %c", &p.idade, &p.sexo);
		
		lista[quant] = p;
		quant++;
		return 1;
	}
	else {
		printf("ERRO: Lista cheia!\n");
		return 0;
	}
}

int main() {
	return 0;
}