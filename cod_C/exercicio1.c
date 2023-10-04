#include <stdlib.h>
#include <stdio.h>

int main (void){

int n, somaf, b;
    somaf=0;
        for(n=1; n<=10; n++){
            printf("Me fale um numero");
            scanf("%d",&b);
            somaf = somaf+b;
            printf("%d",somaf);

        }

        printf("O resultado da soma é %d\n\n", somaf);

    system("pause");
    return 0;
}
