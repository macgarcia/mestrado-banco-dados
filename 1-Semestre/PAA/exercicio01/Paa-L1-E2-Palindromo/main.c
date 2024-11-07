#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_palindromo(char * palavra) {
    int index = 0;
    int tamanho = 0;
    while(palavra[index] != NULL) {
        tamanho++;
        index++;
    }

    char palavra_invertida[tamanho];
    index = 0;
    for (int i = tamanho; i >= 0; i--) {
        palavra_invertida[index] = palavra[i - 1];
        index++;
    }

    return strcmp(palavra, palavra_invertida) == 0;

}

int main() {
    bool is = is_palindromo("socorram me subi no on ibus em marrocos");
    if (is) {
        printf("Palindromo...\n");
    } else {
        printf("Nao...\n");
    }
    return 0;
}
