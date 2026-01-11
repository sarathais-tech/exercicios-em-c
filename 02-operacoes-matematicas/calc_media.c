#include <stdio.h>

// Função para calcular a média e imprimir a mensagem correspondente
void calcularMediaEImprimirMensagem(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f\n", media);

    if(media >= 0.0 && media <= 3.0)
        printf("Reprovado\n");
    else if(media > 3.0 && media <= 6.9)
        printf("Exame\n");
    else if(media >= 7.0 && media <= 10.0)
        printf("Aprovado\n");
}

int main() {
    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    calcularMediaEImprimirMensagem(nota1, nota2, nota3);

    return 0;
}
