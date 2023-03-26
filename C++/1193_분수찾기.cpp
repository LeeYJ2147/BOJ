#include <stdio.h>
#include <cmath>

int main()
{
    int x, number=1, bol;
    scanf("%d", &x);
    for(int i=1; x>i; i++)
    {
        x-=i;
        number++;
    }
    if(number%2) printf("%d/%d", number-x+1, x);
    else printf("%d/%d", x, number-x+1);
    return 0;
}