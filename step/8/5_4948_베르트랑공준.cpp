#include <stdio.h>

int IsNotPrime[250000]={1,1};

int count_prime(int end)
{
    int count=0;
    for(int i=end+1; i<=end*2; i++)
        if(!IsNotPrime[i]) count++;
    return count;
}

int main()
{
    int n;
    for(int i=2; i<246913; i++)
        if(!IsNotPrime[i])
            for(int j=i+i; j<246913; j+=i) IsNotPrime[j]=1;
    scanf("%d", &n);
    while(n)
    {
        printf("%d\n",count_prime(n));
        scanf("%d", &n);
    }
    return 0;
}