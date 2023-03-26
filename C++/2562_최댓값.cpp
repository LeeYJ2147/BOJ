#include <stdio.h>

int main()
{
    int num, max=0, temp;
    for(int i=1; i<10; i++)
    {
        scanf("%d", &temp);
        if(temp > max) max=temp, num=i;
    }
    printf("%d\n%d", max, num);
}