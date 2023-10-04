#include <stdio.h>
#include <stdlib.h>
 int main(void){

 int n1;
 int n2;
 int resultado;

 printf("soma de dois numeros inteiros! \n");
 printf("me fale um numero inteiro: ");
 scanf("%d", &n1);
 printf("me fale outro numero: ");
 scanf("%d", &n2);

 resultado = n1 + n2;

  printf("A soma desses dois numeros é :%d", resultado);
  return 0;
}
