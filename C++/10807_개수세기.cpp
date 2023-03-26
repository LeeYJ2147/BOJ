#include <stdio.h>

int main()
{
    int n, arr[101], v, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &v);
    for(int i=0; i<n; i++)
        if(arr[i] == v) count++;
    printf("%d", count);
    return 0;
}