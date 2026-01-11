#include <stdio.h>
#include <stdlib.h>

void modifica(int *n1){
	int n1;
	
	n1*2;
	
	*n1 = n1;
}

int main (){
	int n1;
	
	printf("Digite o numero:");
	scanf("%d", & n1);
	
	modifica(&n1);
	
	printf("Resultado %d", n1);
	
	return 0;
}
