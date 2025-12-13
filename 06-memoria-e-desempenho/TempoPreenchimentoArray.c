#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define TAM 10000000      // 10 milhoes em 0.141 segundos
// #define TAM 100000000     // 100 milhoes em 1.378 segundos
// #define TAM 400000000     // 400 milhoes em 5.575 segundos
#define TAM 450000000     // 450 milhoes em 6.18 segundos

int v[TAM];  /** Variáveis globais são alocadas no heap */

int main(void) {
//  static int v[TAM];  /** Variáveis estáticas são alocadas no heap */
//  int v[TAM];  /** Variaveis locais são alocadas na pilha */
    unsigned long long int i;  /** variável automática = escopo local */

    printf("tamanho i = %ld bytes\n\n", sizeof(i));

    /** Outra forma de alocar um array na memória heap é alocar
        o array de forma dinâmica, com malloc() */

    clock_t tempo;
    tempo = clock();

    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 10000;
    }

    tempo = clock() - tempo;
    printf("Array preenchido em %f segundos.", (float) tempo / CLOCKS_PER_SEC);

    return 0;
}


