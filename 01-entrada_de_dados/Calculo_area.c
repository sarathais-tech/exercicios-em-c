#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	float base, altura, area;
	
	printf("Digite a base do triangulo:");
	scanf("%f", &base);
	
	printf("Digite a altura do triangulo:");
	scanf("%f", &altura);
	
	area=(base*altura) /2;
	
	printf("A área calculada do tringulo é:%f\n", area);
	
	return 0;
}
