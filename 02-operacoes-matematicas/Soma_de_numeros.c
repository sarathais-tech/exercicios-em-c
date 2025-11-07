#include <stdio.h>
#include <locale.h>

int main(){
	
	int number1, number2, number3, produto;
	
	setlocale (LC_ALL, "PORTUGUESE");

printf("Digite o primeiro número inteiro:");
scanf("%d", &number1);

printf("Digite o segundo número inteiro:");
scanf("%d", &number2);

printf("Digite o terceiro número inteiro:");
scanf("%d", &number3);

produto= number1+number2+number3;

printf("O valor da soma dos números é:%d\n", produto);

return 0;
}
