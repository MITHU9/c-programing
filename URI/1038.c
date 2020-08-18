#include <stdio.h>

int main() {

    int code,q;
    scanf("%d %d",&code,&q);
    if(code==1)
       printf("Total: R$ %.2f\n",(q*4.00));
    if(code==2)
       printf("Total: R$ %.2f\n",(q*4.50));
    if(code==3)
       printf("Total: R$ %.2f\n",(q*5.00));
    if(code==4)
       printf("Total: R$ %.2f\n",(q*2.00));
    if(code==5)
       printf("Total: R$ %.2f\n",(q*1.50));

    return 0;
}
