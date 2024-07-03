// 27433 - 팩토리얼 2
#include <stdio.h>

long long int facto(int n)
{
    if(n==0) return 1;
    else return n*facto(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", facto(n));
    return 0;
}