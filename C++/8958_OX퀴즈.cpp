#include <stdio.h>

int main()
{
    char OX[81];
    int n, score, contin;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", OX);
        score=0, contin=1;
        for(int j=0; OX[j]!='\0'; j++)
        {
            if(OX[j]=='O')
            {
                score+=contin;
                contin++;
            }
            else contin=1;
        }
        printf("%d\n", score);
    }
    return 0;
}