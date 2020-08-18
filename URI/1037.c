#include <stdio.h>

int main() {

   float a;
   scanf("%f",&a);
   if(a>=0 && a<=100.00){
       if(a<=25.00){
          printf("Intervalo [0,25]\n");
       }
       if(a>25.00 && a<=50.00){
           printf("Intervalo (25,50]\n");
       }
       if(a>50.00 && a<=75.00){
           printf("Intervalo (50,75]\n");
       }
       if(a>75.00 && a<=100.00){
           printf("Intervalo (75,100]\n");
       }

   }
  else{
      printf("Fora de intervalo\n");
  }

    return 0;
}
