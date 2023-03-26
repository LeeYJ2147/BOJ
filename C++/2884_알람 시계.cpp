#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if(m>=45) m-=45;
    else
    {
        h--;
        m+=15;
    }
    if(h<0) h=23;
    printf("%d %d", h, m);
    return 0;
}