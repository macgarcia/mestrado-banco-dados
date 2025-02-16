#include "include/txt_util.h"
#include "include/aluno.h"
#include "include/hash_table.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNO 2287

void limpesa_de_memoria(Hash* hash, FILE* arq) {

    for (int i = 0; i < MAX_LISTA; i++) {
        Aluno* aluno = hash->lista[i];
        while(aluno) {
            Aluno* tmp = aluno;
            aluno = aluno->prox;
            limpar_aluno(tmp);
        }
    }

    free(hash->lista);

    fechar_arquivo(arq);
}

int main() {

    Aluno* alunos[MAX_ALUNO];

    FILE* arq = ler_arquivo("dados.txt");

    if (arq == NULL) printf("Arquivo nao existe.\n");

    ler_conteudo_arquivo(arq, alunos);

    Hash* hash = criar_tabela_hash();

    for (int i = 0; i < MAX_ALUNO; i++) {
        add(hash, alunos[i]);
    }

    int acumulador = 0;
    int ociosa = 0;
    for (int i = 0; i < MAX_LISTA; i++) {
        Aluno* aluno = hash->lista[i];
        if (aluno == NULL) {
            ociosa++;
        }
        int count = 0;
        while(aluno) {
            count++;
            aluno = aluno->prox;
        }
        printf("Quatidade de elementos na posicao %d da hash-table: %d\n", i, count);
        acumulador += count;
    }
    printf("-------------------------------------------------------------------\n");
    printf("Media de elementos nas listas: %d\n", acumulador/MAX_LISTA);
    printf("-------------------------------------------------------------------\n");
    printf("Colisoes: %d\n", get_colisoes());
    printf("-------------------------------------------------------------------\n");
    printf("Posicoes ociosas na tabela hash: %d\n", ociosa);
    printf("-------------------------------------------------------------------\n");

    limpesa_de_memoria(hash, arq);

}
