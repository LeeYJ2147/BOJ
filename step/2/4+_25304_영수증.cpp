#include <stdio.h>

int main()
{
    int CheckMoney, n, price, count, RealMoney=0;
    scanf("%d %d", &CheckMoney, &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &price, &count);
        RealMoney += price*count;
    }
    if(CheckMoney == RealMoney) printf("Yes");
    else printf("No");
    return 0;
}