//10. fa�a um programa para mostrar todos os n�meros perfeitos entre 1 e 100. n�mero
//perfeito � todo n�mero inteiro cuja soma dos seus divisores � igual ao pr�prio
//n�mero.


#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int numero_perfeito() {
    int numero = 1;

    while (numero <= 100) {
        int divisor = 1;
        int soma_divisores = 0;

        // Verifica todos os divisores menores que o n�mero
        while (divisor < numero) {
            if (numero % divisor == 0) {
                soma_divisores += divisor;
            }
            divisor++;
        }

        // Se a soma dos divisores for igual ao n�mero, � perfeito
        if (soma_divisores == numero) {
            printf("%d\n", numero);
        }

        numero++;
    }

    return 0;
}