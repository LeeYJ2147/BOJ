#include <stdio.h>

int main()
{
    int zu[3], count=0, num=0;
    scanf("%d %d %d", &zu[0], &zu[1], &zu[2]);
    if(!(zu[0]-zu[1])) count+=1, num=0;
    if(!(zu[1]-zu[2])) count+=1, num=1;
    if(!(zu[2]-zu[0])) count+=1, num=2;

    if(count == 3) printf("%d", zu[0]*1000+10000);
    if(count == 1) printf("%d", zu[num]*100+1000);
    if(count == 0) printf("%d", 100*((zu[0]>zu[1]?zu[0]:zu[1])>zu[2]?(zu[0]>zu[1]?zu[0]:zu[1]):zu[2]));
    return 0;
}