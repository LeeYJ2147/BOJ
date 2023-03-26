#include <stdio.h>

int main()
{
    int TestCase, h, w, n;
    scanf("%d", &TestCase);
    for(int i=0; i<TestCase; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if(n%h) printf("%d\n", (n%h)*100+(n/h+1));
        else printf("%d\n", h*100+(n/h));
    }
    return 0;
}