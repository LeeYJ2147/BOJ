#include <stdio.h>

int main()
{
    int n, min=1000001, max=-1000001, temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &temp);
        if(temp > max) max = temp;
        if(temp < min) min = temp;
    }
    printf("%d %d", min, max);
    return 0;
}