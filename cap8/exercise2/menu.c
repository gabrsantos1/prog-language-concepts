#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int opcao, num;

    do {
        printf("\nMenu:\n");
        printf("1 - Calcular o quadrado de um número\n");
        printf("2 - Calcular o fatorial de um número\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &num);
                printf("Quadrado: %d\n", num * num);
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d", &num);
                printf("Fatorial: %d\n", fatorial(num));
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}
