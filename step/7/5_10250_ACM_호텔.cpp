#include <stdio.h>

int main()
{
    int TestCase, h, w, n;
    scanf("%d", &TestCase);
    for(int i=0; i<TestCase; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        for(int j=1; j<w*h; j++)
            if(j%h) printf("j:%d, %d\n", j, (j%h)*100+(j/h+1));
            else printf("j:%d, %d\n", j, h*100+(j/h+1));
    }
    return 0;
}