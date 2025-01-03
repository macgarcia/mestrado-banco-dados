#include <stdio.h>
#include <stdlib.h>

#include "include/txt_file.h"
#include "include/aluno.h"

#define modelo "NOME: %s NOTA: %f"

Aluno* carregar_dados(FILE* file) {

    char linha[201];
    char nome[50];
    float nota;
    struct Aluno* inicio = NULL;
    struct Aluno* fim = NULL;

    while(fgets(linha, 200, file) != NULL) {
        sscanf(linha, modelo, nome, &nota);
        Aluno* novo_aluno = criar_aluno(nome, nota);
        if (inicio == NULL) {
            inicio = novo_aluno;
        } else {
            fim->proximo = novo_aluno;
        }
        fim = novo_aluno;
    }
    fim->proximo = NULL;
    return inicio;
}

void liberar_memoria(Aluno* inicio) {
    Aluno* tmp;
    if (inicio != NULL) {
        tmp = inicio;
        inicio = inicio->proximo;
        free(tmp);
    }
}

int main() {
    FILE* arquivo_nota = ler_arquivo("notas.txt");
    Aluno* inicio_lista = carregar_dados(arquivo_nota);
    fechar_arquivo(arquivo_nota);
    //imprimir_lista(inicio_lista);
    imprimir_media(inicio_lista);
    maior_nota(inicio_lista);
    liberar_memoria(inicio_lista);
    return 0;
}
