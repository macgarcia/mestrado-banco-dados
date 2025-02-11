#include "include/hash_table.h"
#include "include/aluno.h"
#include <stdio.h>
#include <stdlib.h>

int colisoes = 0;

Hash* criar_tabela_hash() {
    Hash* hash = (Hash*) malloc(sizeof(Hash));
    if (hash == NULL) {
        printf("Erro ao criar a tabela Hash.\n\n");
        exit(0);
    }
    for (int i = 0; i < MAX_LISTA; i++) {
        hash->lista[i] = NULL;
    }
    return hash;
}

int hash_code(int matricula) {
    return (matricula & 0x7FFFFFFF) % MAX_LISTA;
}

void add(Hash* hash_table, Aluno* aluno) {
    int hash_aluno = hash_code(aluno->matricula);
    Aluno* aluno_alocado = hash_table->lista[hash_aluno];
    if (aluno_alocado == NULL) {
        hash_table->lista[hash_aluno] = aluno;
    } else {
        colisoes++;
        while(aluno_alocado) {
            if (aluno_alocado->prox == NULL) {
                aluno_alocado->prox = aluno;
                break;
            }
            aluno_alocado = aluno_alocado->prox;
        }
    }
}

int get_colisoes() {
    return colisoes;
}
