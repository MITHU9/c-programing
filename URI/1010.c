#include <stdio.h>

int main() {

 int pc1,units1,pc2,units2;
 float price1,price2,total;
 scanf("%d %d %f",&pc1,&units1,&price1);
 scanf("%d %d %f",&pc2,&units2,&price2);
 total=(units1*price1)+(units2*price2);
 printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
