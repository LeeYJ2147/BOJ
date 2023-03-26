#include <stdio.h>
int arr[31];

int main()
{
    int temp;
    for(int i=0; i<28; i++)
    {
        scanf("%d", &temp);
        arr[temp]=1;
    }
    for(int i=1; i<31; i++)
        if(!arr[i]) printf("%d\n", i);
    return 0;
}