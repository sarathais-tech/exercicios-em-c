#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    int sum = 0;


    for (int i = 1; i <= 10; i++) {
        sum += i;
    }


    printf("O somatório dos números inteiros de 1 a 10 ?: %d\n", sum);

    return 0;
}
