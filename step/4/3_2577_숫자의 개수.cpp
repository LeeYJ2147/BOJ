#include <stdio.h>

int number[10];

int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    temp = a*b*c;
    while(temp)
    {
        number[temp%10]++;
        temp/=10;
    }
    for(int i=0; i<10; i++)
        printf("%d\n", number[i]);
    return 0;
}