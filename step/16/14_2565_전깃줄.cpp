#include <stdio.h>
#include <algorithm>

using namespace std;
struct w {int a, b;} d[100001];
int IDT[1<<22];
bool cmp(w x, w y) {return x.a<y.a;}

void update(int n)
{
    while(n>1)
    {
        if(IDT[n]>IDT[n/2]) IDT[n/2]=IDT[n];
        n>>=1;
    }
}

int lg_sum(int s, int e)
{
    int m=0;
    while(s<e)
    {
        m=max(m, IDT[e]);
        if(!(e%2)) e--;
        e>>=1, s>>=1;
    }
    if(s==e) m=max(m, IDT[s]);
    return m;
}

int main()
{
    int i, base, n, m=-1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &d[i].a, &d[i].b);
        if(m<d[i].b) m=d[i].b;
    }
    sort(d+1, d+n+1, cmp);
    for(base=1; base<m; base<<=1);
    for(i=1; i<=n; i++)
    {
        IDT[base+d[i].b-1]=lg_sum(base, base+d[i].b-2)+1;
        update(base+d[i].b-1);
    }
    printf("%d\n", n-IDT[1]);
    return 0;
}