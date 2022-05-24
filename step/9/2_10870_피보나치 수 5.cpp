#include <stdio.h>

int DT[21];

int fibo(int n)
{
    if(!n) return 0;
    else if(n==1) return 1;
    else if(!DT[n]) DT[n]=fibo(n-1)+fibo(n-2);
    return DT[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}