#include <stdio.h>

void dobrar_valor(int x) {
    x = x * 2;
    printf("Dentro da função (por valor): %d\n", x);
}

void dobrar_referencia(int *x) {
    *x = (*x) * 2;
    printf("Dentro da função (por referência): %d\n", *x);
}

int main() {
    int numero = 10;

    printf("Valor inicial: %d\n", numero);

    dobrar_valor(numero);
    printf("Depois da chamada por valor: %d\n", numero);

    dobrar_referencia(&numero);
    printf("Depois da chamada por referência: %d\n", numero);

    return 0;
}
