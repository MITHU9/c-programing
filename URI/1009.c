#include <stdio.h>

int main() {

  char name[10];
  double fs,sold,bonus,total;
  scanf("%s",name);
  scanf("%lf %lf",&fs,&sold);
  bonus=(15*sold)/100;
  total=fs+bonus;
  printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
