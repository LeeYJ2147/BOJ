#include <stdio.h>
int prime[700000], DT[10000000], count=0;
/*
소수 판별 -> 배열로 저장
입력된 수보다 커질 때까지 1씩 늘리면서 나눗셈 재귀함수
*/

void prime_find(int end)
{
    for(int i=2; i<=end; i++)
    {
        if(!DT[i])
        {
            prime[count++]=i;
            for(int j=2; i*j<=end; j++) DT[i*j]=1;
        }
    }
}

int main()
{
    int n, i=0;
    scanf("%d", &n);
    prime_find(n);
    while(n>=prime[i])
    {
        if(!(n%prime[i]))
        {
            n/=prime[i];
            printf("%d\n", prime[i]);
        }
        else i++;
    }
    return 0;
}