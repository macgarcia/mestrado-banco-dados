#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/aluno.h"

Aluno* criar_aluno(char* nome, float nota) {
    Aluno* novo_aluno = (struct Aluno*) malloc(sizeof(struct Aluno));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memoria para novo registro");
        exit(1);
    }
    strcpy(novo_aluno->nome, nome);
    novo_aluno->nota = nota;
    return novo_aluno;
}

void imprimir_lista(Aluno* inicio) {
    struct Aluno* atual = inicio;
    while(atual != NULL) {
        printf("Nome: %s Nota %.2f\n\n", atual->nome, atual->nota);
        atual = atual->proximo;
    }
}

void imprimir_media(Aluno* inicio) {
    struct Aluno* atual = inicio;
    float total = 0.0;
    int index = 0;
    while(atual != NULL) {
        total = total + atual->nota;
        index++;
        atual = atual->proximo;
    }
    printf("Media = %.2f\n\n", (total/index));
}

void maior_nota(Aluno* inicio) {
    float maior = 0.0;
    char* nome;
    while(inicio != NULL) {
        if (inicio->nota > maior) {
            maior = inicio->nota;
            nome = inicio->nome;
        }
        inicio = inicio->proximo;
    }
    printf("Aluno: %s\n", nome);
    printf("Maior nota: %.2f", maior);
}
