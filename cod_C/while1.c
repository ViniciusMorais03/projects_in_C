#include <stdlib.h>
#include <stdio.h>

    int main (void){
     int N, B;
    B = 1000;
     do{
        printf("\ndigite um numero  \n");
        scanf("%d", &N);
        if(B > N){
            B=N;
        }

     }while(N != -1);
       printf("\n o menor valor é %d  \n\n", B);

 system ("pause");
 return 0;
    }
