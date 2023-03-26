#include <stdio.h>

int main()
{
    int N, sum=0, ans=1;
    scanf("%d", &N);
    if(N==1) printf("1");
    else
    {
        while(N>=sum+2)
        {
            sum+=ans*6;
            ans++;
        }
        printf("%d", ans);
    }
}