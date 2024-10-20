#include <stdio.h>
#include <string.h>

#include "include/txt_file.h"
#include "include/produto.h"

void carregar_dados(FILE* file) {
    char line[201];
    while(fgets(line, 200, file) != NULL) {
        Produto novo_produto = new_produto(line);
        adicionar_produto(novo_produto);
    }
}

int main() {
    FILE* arquivo_compras = ler_arquivo("compras.txt");
    carregar_dados(arquivo_compras);
    imprimir_lista();
    fechar_arquivo(arquivo_compras);
    return 0;
}
