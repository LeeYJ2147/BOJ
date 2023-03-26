#include <stdio.h>
#include <cmath>

int main()
{
    int up, down, goal;
    scanf("%d %d %d", &up, &down, &goal);
    printf("%d", int(ceil(double(goal-up)/double(up-down)))+1);
    return 0;
}