#include <stdio.h>
int DT[5001];

int small(int a, int b)
{
    return a<b?a:b;
}

int find(int n)
{
    if(DT[n]) return DT[n];
    else if(n<1) return 9999999;
    else if(n==3 || n==5) DT[n]=1;
    else DT[n] = small(find(n-3), find(n-5))+1;
    return DT[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    DT[4]=DT[7]=99999999;
    if(n==4 or n==7) printf("-1");
    else printf("%d", find(n));
}