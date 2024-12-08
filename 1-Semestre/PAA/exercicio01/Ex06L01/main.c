#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int numeros[MAX] = {4, 5, 6, 7, 8, 9, 1, 2, 3, 8};
int result = 10;
int count = 0;

void contagem_contigua() {
    for (int i = 0; i < MAX; i++) {
        count = numeros[i] + numeros[i + 1];
        if (count == result) {
            printf("%d + %d = %d\n", numeros[i], numeros[i + 1], count);
        }
    }
}

void contagem() {
    for(int i = 0; i < MAX - 1; i++) {
        for (int j = i + 1; j < MAX; j++) {
            count = numeros[i] + numeros[j];
            if (count == result) {
                printf("%d + %d = %d\n", numeros[i], numeros[j], count);
            }
        }
    }
}

void contagem_dividida() {
    int meio = MAX / 2;
    for (int i = 0; i < meio; i++) {
        for (int j = meio; j < MAX; j++) {
            count = numeros[i] + numeros[j];
            if (count == result) {
                printf("%d + %d = %d\n", numeros[i], numeros[j], count);
            }
        }
    }
}

int main() {
    //contagem_contigua();
    contagem();
    //contagem_dividida();
    return 0;
}
