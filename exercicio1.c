#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[40];
    int idade;
    float altura;
};

int struct_pessoa() {
    struct pessoa PESSOA;

    printf("Digite o seu nome: \n");
    fgets(PESSOA.nome, 40, stdin);

    printf("Digite a sua idade: \n");
    scanf_s("%d", &PESSOA.idade);

    // Exemplo de uso do campo altura
    printf("Digite a sua altura: \n");
    scanf_s("%f", &PESSOA.altura);

    printf("\nNome: %sIdade: %d\nAltura: %.2f\n", PESSOA.nome, PESSOA.idade, PESSOA.altura);

    return 0;
}