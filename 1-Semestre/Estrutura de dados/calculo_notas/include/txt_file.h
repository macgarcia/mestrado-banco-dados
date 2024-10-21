#ifndef TXT_FILE_H_INCLUDED
#define TXT_FILE_H_INCLUDED

#include <stdio.h>

extern FILE* ler_arquivo(char* nome_arquivo);
extern void fechar_arquivo(FILE* file);

#endif // TXT_FILE_H_INCLUDED
