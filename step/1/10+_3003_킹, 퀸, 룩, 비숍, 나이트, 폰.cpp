#include <stdio.h>
int stand[7] = {1, 1, 2, 2, 2, 8}, now[7];

int main()
{
    for(int i=0; i<6; i++) scanf("%d", &now[i]);
    for(int i=0; i<6; i++) printf("%d ", stand[i]-now[i]);
    return 0;
}