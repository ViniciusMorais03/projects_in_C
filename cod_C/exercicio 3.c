#include <stdio.h>
#include <stdlib.h>

 int main(void){
 char nome[20];
 float nota1, nota2, nota3;
 float media;
 float resultado;

 printf("media do aluno \n");
 printf("qual o seu nome?:");
 scanf("%s", &nome);
 printf("qual a primeira nota do aluno?:");
 scanf("%f", &nota1);
 printf("qual a segunda nota do aluno?:");
 scanf("%f", &nota2);
 printf("e por fim qual a terceira nota?:");
 scanf("%f", &nota3);

 media = nota1 + nota2 + nota3;

 resultado = media/3;

 printf("A nota final do %s", nome);
 printf("igaul a %.1f", resultado);
 return 0;
 }
