#include <stdio.h>
#include <stdlib.h>
 int main(void){

  int p;
  float m = 25.4;
  float r;
  printf("quanto choveu em  polegadas hoje?: ");
  scanf("%d", &p);

  r = m * p;
  printf("choveu exatamente %.2f de milimetros", r);
  return 0;
}
