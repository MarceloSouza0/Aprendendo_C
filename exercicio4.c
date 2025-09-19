#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[40];
    int idade;
    float altura;
};

int struct_pessoas() {
    struct pessoa pessoas[3];  // vetor de structs

    for (int i = 0; i < 3; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, 40, stdin);

        printf("Idade: ");
        scanf_s("%d", &pessoas[i].idade);

        printf("Altura: ");
        scanf_s("%f", &pessoas[i].altura);

		getchar();  // Limpar o buffer do teclado
    }

    // Exibindo os dados
    printf("\n--- Lista de Pessoas ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", pessoas[i].nome);  // fgets já coloca \n no final
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %.2f\n", pessoas[i].altura);
    }

    return 0;
}