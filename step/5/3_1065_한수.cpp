#include <stdio.h>
#include <math.h>

int DT[1001];

void is_hansu(int n)
{
    int num_len=int(log10(float(n))), d;
    d=(n/10%10)-(n%10);
    for(int i=1; i<num_len; i++)
    {
        int temp=n/pow(10.0, float(i));
        if(d!=(temp/10%10)-(temp%10)) return;
    }
    DT[n]=1;
    return;
}

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        is_hansu(i);
        sum+=DT[i];
    }
    printf("%d", sum);
    return 0;
}