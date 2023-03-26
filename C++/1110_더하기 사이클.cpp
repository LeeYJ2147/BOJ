#include <stdio.h>

int f(int n)
{
    int front, back;
    front = n%10;
    back = ((n%10)+((n/10)%10))%10;
    return 10*front+back;
}

int main()
{
    int n;
    scanf("%d", &n);
    int temp=n, count=0;
    while(true)
    {
        temp = f(temp);
        count++;
        if(temp == n) break;
    }
    printf("%d", count);
    return 0;
}