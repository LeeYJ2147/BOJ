#include <stdio.h>

int main()
{
    int a[3], b[3], A, B;
    scanf("%1d%1d%1d %1d%1d%1d", &a[0],&a[1],&a[2], &b[0],&b[1],&b[2]);
    A=a[2]*100+(a[1]*10)+a[0], B=(b[2]*100)+(b[1]*10)+b[0];
    printf("%d", A>B?A:B);
    return 0;
}