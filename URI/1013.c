#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if((a>b&&b>c)||(a>c&&c>b))
       printf("The greatest number is:%d",a);
  else if((b>c&&c>a)||(b>a&&a>c))
       printf("The greatest number is:%d",b);
  else
       printf("The greatest number is:%d",c);

    return 0;
}
