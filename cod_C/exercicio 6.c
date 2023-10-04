#include <stdio.h>
#include <stdlib.h>
int main(void){
float custo;
    printf("qual o valor de fabrica do veiculo?");
    scanf("%f", &custo);


    custo *= 1+ 0.12 +0.45;
    printf("o custo do consumidor é exatamente %f", custo);
    return 0;
    }
