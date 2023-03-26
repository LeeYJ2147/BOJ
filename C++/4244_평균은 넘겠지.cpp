#include <stdio.h>

int main()
{
    int C, n, score[1001], sum, upper;
    float mean;
    scanf("%d", &C);
    for(int i=0; i<C; i++)
    {
        scanf("%d", &n);
        sum=0, upper=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d", &score[j]);
            sum+=score[j];
        }
        mean = (float)sum/n;
        for(int j=0; j<n; j++)
            if(score[j] > mean) upper++;
        printf("%.3f%%\n", (float)upper*100/n);
    }
    return 0;
}