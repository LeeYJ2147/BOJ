#include <stdio.h>
int DT[15][15];
int f(int k, int n)
{
    if(n==1) return 1;
    if(k==0) return n;
    else if(!DT[k][n]) DT[k][n]=f(k-1, n)+f(k, n-1);
    return DT[k][n];
}
int main()
{
    int k, n, TestCase;
    scanf("%d", &TestCase);
    for(int i=0; i<TestCase; i++)
    {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", f(k, n));
    }
    return 0;
}