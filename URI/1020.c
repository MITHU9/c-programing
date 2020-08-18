#include <stdio.h>

int main() {

    int n,y,m,d,rem;
    scanf("%d",&n);
    y=n/365;
    printf("%d ano(s)\n",y);
    rem=n%365;
    m=rem/30;
    printf("%d mes(es)\n",m);
    d=rem%30;
    printf("%d dia(s)\n",d);

    return 0;
}
