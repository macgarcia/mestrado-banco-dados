#include <stdio.h>

#include "include/txt_file.h"

#define READ "r"

FILE* ler_arquivo(char* nome_arquivo) {
    FILE* file = fopen(nome_arquivo, READ);
    if (file != NULL) return file;
    printf("Erro ao ler o arquivo");
}

void fechar_arquivo(FILE* file) {
    fclose(file);
}
