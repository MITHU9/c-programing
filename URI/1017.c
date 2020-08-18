#include <stdio.h>

int main() {

   int t,avgspeed;
   float total;
   scanf("%d %d",&t,&avgspeed);
   total=(t*avgspeed)/12.0;
   printf("%.3f\n",total);
    return 0;
}
