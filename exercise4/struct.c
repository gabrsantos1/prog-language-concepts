#include <stdio.h>
#include <stdlib.h>

struct book {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct book book1 = {"Lego Homem Aranha", "Lego Spider", 2015};
    printf("Livro: %s, Autor: %s, Ano: %d\n", book1.titulo, book1.autor, book1.anoPublicacao);
    return 0;
}