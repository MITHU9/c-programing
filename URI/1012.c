#include <stdio.h>

int main() {

   float a,b,c,t,cir,trap,squere,rectan;
   scanf("%f %f %f",&a,&b,&c);
   t=(a*c)/2.0;
   cir=3.14159*c*c;
   trap=(a+b)/2.0*c;
   squere=b*b;
   rectan=a*b;
   printf("TRIANGULO: %.3f\n",t);
   printf("CIRCULO: %.3f\n",cir);
   printf("TRAPEZIO: %.3f\n",trap);
   printf("QUADRADO: %.3f\n",squere);
   printf("RETANGULO: %.3f\n",rectan);

    return 0;
}
