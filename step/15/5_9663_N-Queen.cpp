#include <stdio.h>

int visited[17], dia[17], n, count;

int isvisited(int x, int y)
{
    if(!visited[y])
    {
        for(int i=1; i<x; i++)
        {
            if(dia[i]+(x-i)==y || dia[i]+(i-x)==y) return 1;
        }
        return 0;
    }
    else return 1;
}

void solve(int x, int y)
{
    if(x>=n)
    {
        count++;
        return;
    }
    for(int i=1; i<=n; i++)
        if(!isvisited(x+1, i))
        {
            visited[i]=1, dia[x+1]=i;
            solve(x+1, i);
            visited[i]=0, dia[x+1]=0;
        }
    return;
}

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        visited[i] = 1, dia[1]=i;
        solve(1, i);
        visited[i] = 0, dia[1]=0;
    }
    printf("%d", count);
    return 0;
}