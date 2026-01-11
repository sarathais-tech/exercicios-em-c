#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void preencherArray(int array[TAM]) {
    int i;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        array[i] = rand() % 100 + 1; 
    }
}

void imprimirArray(int array[TAM]) {
    int i;

    for (i = 0; i < TAM; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void buscarNumero(int array[TAM], int numero) {
    int i;
    int primeiraOcorrencia = -1;
    int ultimaOcorrencia = -1;
    int ocorrencias = 0;

    for (i = 0; i < TAM; i++) {
        if (array[i] == numero) {
            if (primeiraOcorrencia == -1) {
                primeiraOcorrencia = i;
            }
            ultimaOcorrencia = i;
            ocorrencias++;
        }
    }

    if (ocorrencias > 0) {
        printf("Primeira ocorrência: array[%d]\n", primeiraOcorrencia);
        printf("Última ocorrência: array[%d]\n", ultimaOcorrencia);
        printf("Número de ocorrências: %d\n", ocorrencias);
    } else {
        printf("Número não encontrado no array.\n");
    }
}

int main() {
    int array[TAM];
    int numero;

    preencherArray(array);

    imprimirArray(array);

    while (1) {
        printf("Digite um número (ou -1 para sair): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        buscarNumero(array, numero);
    }

    return 0;
}
