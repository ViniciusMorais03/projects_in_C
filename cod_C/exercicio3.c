#include <stdlib.h>
#include <stdio.h>

int main (void){
int par, num, n, resto;

    for(n=1; n <=20; n++){
        printf("me fale numeros: ");
        scanf("%d", &num);
        resto = num % 2;
        if(resto == 0){
            par = par + 1;

        }

    }
         printf("tem exatamente %d de numeros pares ", par);

         system("pause");
         return 0;



}
