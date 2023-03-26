#include <stdio.h>
#include <math.h>

int IsNotPrime[1000002]={1,1};

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for(int i=2; i<=end; i++)
        if(!IsNotPrime[i])
            for(int j=i+i; j<=end; j+=i)
                IsNotPrime[j]=1;
    for(int i=start; i<=end; i++)
        if(!IsNotPrime[i]) printf("%d\n", i);
    return 0;
}