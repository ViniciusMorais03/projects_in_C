#include <stdio.h>
#include <stdlib.h>

 int main(void){

 int c;
 int f;

 printf("Quantos graus celsius esta fazendo no dia?:");
 scanf("%d", &c);

 f = 9.0/5.0 * c + 32;

 printf("Esta fazendo %d graus celsius \n", c);
 printf("E em fahrenheit esta fazendo %d graus fahrenheit", f);

 return 0;
 }
