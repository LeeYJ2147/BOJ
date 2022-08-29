#include <stdio.h>

int prime[10001], min=99999, sum=0;

void IsPrime(int start, int n)
{
    for(int i=2; i<=n; i++)
    {
        if(!prime[i])
        {
            for(int j=2; i*j<=n; j++) prime[i*j]=1;
            if(i>=start)
            {
                sum+=i;
                if(min>i) min=i;
            }
        }
    }
    return;
}

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    IsPrime(start, end);
    if(min==99999) printf("-1");
    else printf("%d\n%d", sum, min);
}