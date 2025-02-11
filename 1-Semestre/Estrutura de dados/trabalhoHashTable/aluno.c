#include "include/aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Aluno* criar_aluno(int matricula, char* nome, float nota1, float nota2, float nota3) {
    Aluno* aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Sem memoria para alocar novo aluno.\n\n");
        exit(0);
    }
    aluno->matricula = matricula;
    strcpy(aluno->nome, nome);
    aluno->nota1 = nota1;
    aluno->nota2 = nota2;
    aluno->nota3 = nota3;
    aluno->prox = NULL;
    return aluno;
}

void limpar_aluno(Aluno* aluno) {
    free(aluno);
}

void imprimir_dados_aluno(Aluno* aluno) {
    printf("Matricula: %d\n", aluno->matricula);
    printf("Nome: %s\n", aluno->nome);
    printf("Nota-01: %.2f\n", aluno->nota1);
    printf("Nota-02: %.2f\n", aluno->nota2);
    printf("Nota-03: %.2f\n", aluno->nota3);
    printf("-------------------------------\n");
}

