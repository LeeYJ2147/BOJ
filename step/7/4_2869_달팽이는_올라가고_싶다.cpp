#include <stdio.h>
#include <cmath>

int main()
{
    int up, down, goal;
    scanf("%d %d %d", &up, &down, &goal);
    printf("분자:%d\n분모:%f\n분수값:%f\n올림:%f\nint:%d\n", goal-up, double(up-down), double(goal-up)/double(up-down), ceil(double(goal-up)/double(up-down)), int(double(goal-up)/double(up-down)));
    printf("%d", int(ceil(double(goal-up)/double(up-down)))+1);
    return 0;
}