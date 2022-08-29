#include <stdio.h>

int Prime[1002];

void IsPrime(void)
{
    for(int i=2; i<1001; i++)
    {
        if(Prime[i]) continue;
        else
            for(int j=2; i*j<1001; j++) Prime[i*j]=1;
    }
}

int main()
{
    IsPrime();
    Prime[1]=1;
    int n, ans=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if(!Prime[temp]) ans++;
    }
    printf("%d", ans);
    return 0;
}