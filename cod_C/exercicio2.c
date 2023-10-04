#include <stdlib.h>
#include <stdio.h>

int main (void){
    int idade, maior, menor, n;
    maior= 0;
    for(n=1; n <=20; n++){
        printf("qual a sua idade: ");
        scanf("%d", &idade);

        if(idade > 18){
            maior = maior + 1 ;

        }
    }
         printf("%d pessoas sao maiores de idade", maior);

         system("pause");
         return 0;



}
