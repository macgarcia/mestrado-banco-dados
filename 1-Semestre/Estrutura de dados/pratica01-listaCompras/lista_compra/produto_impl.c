#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/produto.h"

#define MAX 1000
#define DELIMITER " "

struct Produto produtos[MAX];
int index = 0;
float total_compra = 0;

Produto new_produto(char* linha_arquivo) {
    char* token;
    Produto p;

    token = strtok(linha_arquivo, DELIMITER);
    strcpy(p.nome, token);

    token = strtok(NULL, DELIMITER);
    p.qtde = atoi(token);

    token = strtok(NULL, DELIMITER);
    p.preco = atoi(token);

    p.preco_total = (p.preco * p.qtde);

    return p;
}

void adicionar_produto(Produto p) {
    produtos[index] = p;
    total_compra = total_compra + (p.preco * p.qtde);
    index++;
}

void imprimir_lista() {
    for (int i = 0; i < index; i++) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %d, Preco: %.2f, Total_produto: %.2f\n", produtos[i].qtde, produtos[i].preco, produtos[i].preco_total);
        printf("-----------------------------------\n");
    }
    printf("Total: %.2f", total_compra);
}
