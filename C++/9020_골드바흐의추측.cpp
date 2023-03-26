#include <stdio.h>
/*
n/2부터 탐색 시작
-> n/2가 소수인가? (n - n/2)도 소수인가?
-> n/2 -1가 소수인가? (n - (n/2 -1))도 소수인가?
...
*/

int IsNotPrime[10001]={1,1};

int main()
{
    int n, num;
    scanf("%d", &n);
    for(int i=2; i<=10000; i++)
        if(!IsNotPrime[i])
            for(int j=i+i; j<=10000; j+=i)
                IsNotPrime[j]=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        int j=num/2;
        while(IsNotPrime[j] || IsNotPrime[num-j]) {j--;}
        printf("%d %d\n", j, num-j);
    }
    return 0;
}