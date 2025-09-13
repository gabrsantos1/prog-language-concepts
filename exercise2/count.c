#include <stdio.h>
#include <stdlib.h>

void contador() {
    int a = 0;
    static int b = 0; 

    a++;
    b++;

    printf("Valor A: %d, Valor B: %d\n", a, b);
}

int main() {
    contador();
    contador();
    contador();
    return 0;
}