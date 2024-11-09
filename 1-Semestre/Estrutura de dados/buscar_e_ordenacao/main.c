#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define READ "r"
#define DELIMITER ";"
#define MAX 30228

FILE * abrir_arquivo() {
    FILE* file = fopen("DadosEnem.txt", READ);
    return file;
}

//---------------------
typedef struct escola {
    int id;
    char estado[3];
    char municipio[100];
    char rede[100];
    float natureza;
    float humanas;
    float linguagem;
    float matematica;
    float redacao
} Escola;

Escola dados_escola[MAX];
int index = 0;

void criar_objeto(char* linha_arquivo) {
    char* token;
    Escola e;

    token = strtok(linha_arquivo, DELIMITER);
    e.id = atoi(token);

    token = strtok(NULL, DELIMITER);
    strcpy(e.estado, token);

    token = strtok(NULL, DELIMITER);
    strcpy(e.municipio, token);

    token = strtok(NULL, DELIMITER);
    strcpy(e.rede, token);

    token = strtok(NULL, DELIMITER);
    e.natureza = atoi(token);

    token = strtok(NULL, DELIMITER);
    e.humanas = atoi(token);

    token = strtok(NULL, DELIMITER);
    e.linguagem = atoi(token);

    token = strtok(NULL, DELIMITER);
    e.matematica = atoi(token);

    token = strtok(NULL, DELIMITER);
    e.redacao = atoi(token);

    dados_escola[index] = e;

    index++;
}

char* ler_arquivo(FILE* file) {
    char linha[100];
    while(fgets(linha, 200, file) != NULL) {
        criar_objeto(linha);
    }
    fclose(file);
}
//--------------------------
void bubbleSort() {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (dados_escola[j].id > dados_escola[j + 1].id) {
                // Troca os elementos
                Escola temp = dados_escola[j];
                dados_escola[j] = dados_escola[j + 1];
                dados_escola[j + 1] = temp;
            }
        }
    }
}

//---------------------------
Escola busca_binaria_por_id(int id) {
    int inicio, meio, fim;
    inicio = 0;
    fim = MAX - 1;
    Escola e = {};
    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;
        if (dados_escola[meio].id == id) {
            e = dados_escola[meio];
            return e;
        } else if (dados_escola[meio].id < id) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return e;
}
//---------------------------
Escola busca_sequencial_por_id(int id) {
    Escola e;
    for(int i = 0; i < MAX; i++) {
        if (dados_escola[i].id == id) {
            e = dados_escola[i];
        }
    }
    return e;
}
//---------------------------

void executar_busca_binaria(int id) {
    clock_t inicio, fim;
    unsigned long int tempo;
    Escola e = {};

    inicio = clock();
    bubbleSort();
    e = busca_binaria_por_id(id);
    fim = clock();

    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("Tempo: %lu milissegundos\n\n", tempo);
    printf("%d\n%s\n%s\n", e.id, e.municipio, e.estado);
}

int main() {
    FILE * arquivo = abrir_arquivo();
    if (arquivo == NULL) exit(0);
    ler_arquivo(arquivo);
    Escola e;
    int id = 5090;
    executar_busca_binaria(id);
    //e = busca_sequencial_por_id(id);
    return 0;
}
