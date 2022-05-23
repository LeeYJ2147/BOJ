#include <stdio.h>

int main()
{
    int M=0, temp, n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &temp);
        if(temp > M) M=temp;
        sum+=temp;
    }
    printf("%f", (float)sum/n*100/M);
    return 0;
}