#include <stdio.h>

int main() {

    float a,b,c,r1,r2,p;
    scanf("%f %f %f",&a,&b,&c);
    p=(b*b-4*a*c);
    if(2*a!=0 && p>=0){
          r1=(-b+sqrt(p))/(2*a);
          printf("R1 = %.5f\n",r1);
          r2=(-b-sqrt(p))/(2*a);
          printf("R2 = %.5f\n",r2);
    }

  else{
     printf("Impossivel calcular\n");
  }

    return 0;
}
