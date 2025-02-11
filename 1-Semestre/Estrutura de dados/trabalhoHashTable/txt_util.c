#include "include/txt_util.h"
#include <stdio.h>
#include <stdlib.h>

#define READ "r"
#define modelo "%d %s %d %d %d"


FILE* ler_arquivo(char* caminho) {
    FILE* arq = fopen(caminho, READ);
    if (arq == NULL) {
        return NULL;
    }
    return arq;
}

void fechar_arquivo(FILE* arq) {
    fclose(arq);
}

void ler_conteudo_arquivo(FILE* arq, Aluno* alunos[]) {
    char linha[201];
    int matricula;
    char nome[15];
    int nota1, nota2, nota3;
    int index = 0;

    while(fgets(linha, 201, arq) != NULL) {
        sscanf(linha, modelo, &matricula, nome, &nota1, &nota2, &nota3);
        Aluno* aluno_criado = criar_aluno(matricula, nome, nota1, nota2, nota3);
        if (aluno_criado == NULL) {
            printf("Erro ao criar dados do aluno.\n\n");
            exit(0);
        }
        alunos[index] = aluno_criado;
        index++;
    }
}
