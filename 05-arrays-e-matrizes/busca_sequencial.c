#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define TAM 20

// Realizar busca linear (ou sequencial)
// de dados em um array

void preencherArray(int v[]) {
    int i;

    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 100;
    }

}

void imprimirArray(int v[]) {
    int i;

    for (i = 0; i < TAM; i++) {
        printf("%3d", v[i]);
    }
}

bool buscarNumeroArray(int v[], int n) {
    bool achei = false;
    int i;

    for (i = 0; i < TAM; i++) {
        if (v[i] == n) {
            achei = true;
            i = TAM;  // break;
        }
    }

    return achei;
}

int main(void) {
    int v[TAM], i, n;
    bool achei;

    srand(time(NULL));

    preencherArray(v);
    imprimirArray(v);

    printf("\n\nEntre com o inteiro a ser pesquisado: ");
    scanf("%d", &n);

    achei = buscarNumeroArray(v, n);

    if (achei)
        printf("\nO numero %d existe no array.", n);
    else
        printf("\nO numero %d NAO existe no array.", n);
	
	system("0A");
    return 0;
}
