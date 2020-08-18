#include <stdio.h>

int main() {

    double n;
    int N,rem;
    scanf("%lf",&n);
    N=n*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",N/10000);
    rem=(N%10000);
    printf("%d nota(s) de R$ 50.00\n",rem/5000);
    rem=(rem%5000);
    printf("%d nota(s) de R$ 20.00\n",rem/2000);
    rem=(rem%2000);
    printf("%d nota(s) de R$ 10.00\n",rem/1000);
    rem=(rem%1000);
    printf("%d nota(s) de R$ 5.00\n",rem/500);
    rem=rem%500;
    printf("%d nota(s) de R$ 2.00\n",rem/200);

    printf("MOEDAS:\n");
    rem=(rem%200);
    printf("%d moeda(s) de R$ 1.00\n",rem/100);
    rem=(rem%100);
    printf("%d moeda(s) de R$ 0.50\n",rem/50);
    rem=(rem%50);
    printf("%d moeda(s) de R$ 0.25\n",rem/25);
    rem=(rem%25);
    printf("%d moeda(s) de R$ 0.10\n",rem/10);
    rem=(rem%10);
    printf("%d moeda(s) de R$ 0.05\n",rem/5);
    rem=(rem%5);
    printf("%d moeda(s) de R$ 0.01\n",rem/1);

    return 0;
}
