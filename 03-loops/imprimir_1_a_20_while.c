#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");

    int num;

    num = 1;

    while(num <=20){

         printf("%d\n",num);


     num++;
    }


    system("color 0A");
    return 0;
}
