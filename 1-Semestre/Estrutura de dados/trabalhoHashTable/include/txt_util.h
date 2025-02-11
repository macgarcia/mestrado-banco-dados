#ifndef TXT_UTIL_H_INCLUDED
#define TXT_UTIL_H_INCLUDED

#include "aluno.h"
#include <stdio.h>

FILE* ler_arquivo(char* caminho);
void fechar_arquivo(FILE* arq);
void ler_conteudo_arquivo(FILE* arq, Aluno* alunos[]);

#endif // TXT_UTIL_H_INCLUDED
