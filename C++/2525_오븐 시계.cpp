#include <stdio.h>

int main()
{
    int h, m, c;
    scanf("%d %d %d", &h, &m, &c);
    m+=c%60;
    h+=c/60;
    while(m>=60)
    {
        m-=60;
        h+=1;
    }
    while(h>=24) h-=24;
    printf("%d %d", h, m);
    return 0;
}