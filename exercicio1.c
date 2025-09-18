#include <stdio.h>
#include <stdlib.h>

#include "main.h"


int fib_recursivo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib_recursivo(n - 1) + fib_recursivo(n - 2);
}


int fibonacci_recursivo() { // O(2^n)
	int n = 15;
	printf("Fibonacci (Recursivo): ");
	for (int i = 0; i < n; i++) {
		printf("%d", fib_recursivo(i));
	}

	return 0;
}


int fibonacci_iterativo() { // O(n)
	int n = 15;
    int a = 0, b = 1, c;

    printf("Fibonacci (iterativo): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}