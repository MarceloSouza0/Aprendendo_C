//10. faça um programa para mostrar todos os números perfeitos entre 1 e 100. número
//perfeito é todo número inteiro cuja soma dos seus divisores é igual ao próprio
//número.


#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int numero_perfeito() {
    int numero = 1;

    while (numero <= 100) {
        int divisor = 1;
        int soma_divisores = 0;

        // Verifica todos os divisores menores que o número
        while (divisor < numero) {
            if (numero % divisor == 0) {
                soma_divisores += divisor;
            }
            divisor++;
        }

        // Se a soma dos divisores for igual ao número, é perfeito
        if (soma_divisores == numero) {
            printf("%d\n", numero);
        }

        numero++;
    }

    return 0;
}