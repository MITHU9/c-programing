#include <stdio.h>

int main() {

    int n,h,m,s,rem;
    scanf("%d",&n);
    h=n/3600;

    rem=n%3600;
    m=rem/60;

    s=rem%60;
      printf("%d:%d:%d\n",h,m,s);

    return 0;
}
