#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

#include <stdio.h>

typedef struct Aluno {
    char nome[50];
    float nota;
    struct Aluno* proximo;
} Aluno;

extern Aluno* criar_aluno(char* nome, float nota);
extern void imprimir_lista(Aluno* inicio);
extern void imprimir_media(Aluno* inicio);
extern void maior_nota(Aluno* inicio);

#endif // ALUNO_H_INCLUDED
