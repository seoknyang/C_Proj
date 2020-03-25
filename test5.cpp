#include <stdio.h>
int main(void)
{
    int won;
    int money[7]={10000,5000,1000,500,100,50,10};
    int a[7], b[7], i;
    printf("금액을 입력하고 Enter>");
    scanf("%d", &won);
    printf("화폐단위\n");
    a[0] = won/money[0];
    b[0] = won-money[0]*a[0];
    printf("%5d원권 :\t%d\n", money[0], a[0]);
    for(i=1;i<7;i++)
    {
        a[i] = b[i-1]/money[i];
        b[i] = b[i-1]-money[i]*a[i];
        printf("%5d원권 : \t%d\n", money[i], a[i]);
    }
    return 0;
}


