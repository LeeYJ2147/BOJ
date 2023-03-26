#include <stdio.h>
#include <math.h>
int prime[670000]={2}, DT[10000001], count=0, isprime=0;
/*
소수 판별 -> 배열로 저장
입력된 수보다 커질 때까지 1씩 늘리면서 나눗셈 재귀함수

n까지 반복해도 되지만 i^2=n이 되는 i까지만 반복
-> 메모리, 반복횟수 줄일 수 있음

오류났던 이유 : DT를 천만으로 잡음
-> 10000001로 잡아서 오버플로우 방지 후 해결
*/

void prime_find(int end)
{
    count=0;
    for(int i=2; i<=end; i++)
    {
        if(!DT[i])
        {
            prime[count++]=i;
            for(int j=i+i; j<=end; j+=i) DT[j]=1;
        }
    }
    if(prime[count-1] == end) isprime=1;
    return;
}

int main()
{
    int n, i=0;
    scanf("%d", &n);
    int until=sqrt(n)+1, temp=n;
    prime_find(temp);
    if(isprime) printf("%d\n", n);
    else
    {
        for(int i=0; i<count; i++)
        {
            while(!(temp%prime[i]))
            {
                printf("%d\n", prime[i]);
                temp/=prime[i];
            }
        }
    }
    /*
    while(temp>=prime[i])
    {
        if(temp%prime[i])
        {
            i++;
            if(i<10) printf("%d가 되고 %d임\n", i, prime[i]);
        }
        else
        {
            printf("%d %d %d\n", temp, prime[i], temp/prime[i]);
            temp=temp/prime[i];
            printf("%d %d %d\n\n", temp, temp%prime[i], temp>=prime[i+1]);
        }
    }
    */
    return 0;
}