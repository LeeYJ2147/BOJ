#include <stdio.h>

int number[42];

int main()
{
    int temp, ans=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &temp);
        if(!number[temp%42])
        {
            ans++;
            number[temp%42]=1;
        }
    }
    printf("%d", ans);
    return 0;
}