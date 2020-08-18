#include <stdio.h>
#include <math.h>
int main() {

   float a,b,c,d,distance;
   scanf("%f %f %f %f",&a,&b,&c,&d);
   distance=sqrt((c-a)*(c-a)+(d-b)*(d-b));
   printf("%.4f",distance);

    return 0;
}
