#include <stdio.h>

int main() {

    char palavra[] = "Gengar";


    int contador = 0;


    do {
        printf("%s\n", palavra);
        contador++;
    } while (contador < 20);

    return 0;
}
