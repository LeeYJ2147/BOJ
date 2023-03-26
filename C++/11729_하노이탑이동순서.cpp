#include <stdio.h>

int count(int num)
{
    if(num==1) return 1;
    return count(num-1)*2+1;
}

void move(int num, int now, int goal)
{
    if(num==1) printf("%d %d\n", now, goal);
    else
    {
        move(num-1, now, 6-now-goal);
        printf("%d %d\n", now, goal);
        move(num-1, 6-now-goal, goal);
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));
    move(n, 1, 3);
    return 0;
}