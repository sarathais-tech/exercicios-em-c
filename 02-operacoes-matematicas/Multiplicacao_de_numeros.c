#include <stdio.h>
#include <locale.h>

int main(){
	
int number1, number2, produto;

setlocale (LC_ALL, "PORTUGUESE");

printf("Digite o primeiro n�mero inteiro:");
scanf("%d", &number1);

printf("Digite o segundo n�mero inteiro:");
scanf("%d", &number2);

produto= number1*number2;

printf("O valor do produto dos numeros �:%d\n", produto);

return 0;
	
}


