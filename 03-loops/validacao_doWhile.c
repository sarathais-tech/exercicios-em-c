#include <stdio.h>

// Função para ler e validar uma nota
float lerNota() {
    float nota;

    do {
        printf("Digite uma nota (0.0 - 10.0): ");
        scanf("%f", &nota);

        if(nota < 0.0 || nota > 10.0)
            printf("Nota inválida! Por favor, digite novamente.\n");
    } while(nota < 0.0 || nota > 10.0);

    return nota;
}

// Fun��o para calcular a m�dia e imprimir a mensagem correspondente
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

    nota1 = lerNota();
    nota2 = lerNota();
    nota3 = lerNota();

    calcularMediaEImprimirMensagem(nota1, nota2, nota3);

    return 0;
}
