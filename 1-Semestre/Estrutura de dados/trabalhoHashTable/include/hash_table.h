#ifndef HASH_TABLE_H_INCLUDED
#define HASH_TABLE_H_INCLUDED

#include "aluno.h"
#define MAX_LISTA 100

typedef struct {
    Aluno* lista[MAX_LISTA];
} Hash;

Hash* criar_tabela_hash();
int hash_code(int matricula);
void add(Hash* hash_table, Aluno* aluno);
int get_colisoes();

#endif // HASH_TABLE_H_INCLUDED
