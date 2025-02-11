#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED


typedef struct {
    int matricula;
    char nome[15];
    float nota1, nota2, nota3;
    struct Aluno* prox;
} Aluno;

Aluno* criar_aluno(int matricula, char* nome, float nota1, float nota2, float nota3);
void limpar_aluno(Aluno* aluno);
void imprimir_dados_aluno(Aluno* aluno);


#endif // ALUNO_H_INCLUDED
