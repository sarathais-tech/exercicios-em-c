#include <stdio.h>

int buscaOrdenada (int v[], int tamanho, int numero) {
  int i, posicao = -1;
  for (i = 0; i < tamanho; i++) {
    if (v[i] == numero) {
      posicao = i;
      i = tamanho;
    } else {
      if (v[i] >= numero) {
        i = tamanho;
      }
    }
  }
  return posicao;
}

int main() {
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = 10;
  int numero;

  printf("Digite o numero que deseja procurar: ");
  scanf("%d", &numero);

  int posicao = buscaOrdenada(v, tamanho, numero);

  if (posicao != -1) {
    printf("O numero %d esta na posicao %d do vetor.\n", numero, posicao);
  } else {
    printf("O numero %d nao esta no vetor.\n", numero);
  }

  return 0;
}
