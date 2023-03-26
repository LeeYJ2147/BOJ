#include <stdio.h>
#include <math.h>

int DT[10001];

void find_self_number(int n)
{
    int next=n, lgn=int(log10(float(n)));
    for(int i=0; i<=lgn; i++)
    {
        next+=n/int(pow(10.0,float(i)))%10;
        if(next > 10000) return;
    }
    DT[next]=1;
}

int main()
{
    for(int i=1; i<10000; i++) find_self_number(i);
    for(int i=1; i<10000; i++) if(!DT[i]) printf("%d\n", i);
    return 0;
}