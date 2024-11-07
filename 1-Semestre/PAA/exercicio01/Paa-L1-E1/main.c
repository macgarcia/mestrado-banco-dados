#include <stdio.h>
#include <stdlib.h>

#define MAX 7
#define INICIO 0

int buscar_elemento(char * elementos, int inicio_pesquisa, char conteudo) {
    if (inicio_pesquisa >= MAX) {
        return -1;
    }

    if (elementos[inicio_pesquisa] == conteudo) {
        return inicio_pesquisa;
    }

    return buscar_elemento(elementos, inicio_pesquisa + 1, conteudo);
}

int main() {
    char elementos[MAX] = {'A','B','C','D','E','F','G'};
    int ref = buscar_elemento(elementos, INICIO, 'B');
    if (ref == -1) {
        printf("Valor inexistente...\n");
        return 0;
    }
    printf("indice do conteudo: %d\n", ref);
    return 0;
}
