#include <stdio.h>

int main()
{
    int arr[101];
    int n, m, start, end, temp;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++) arr[i]=i;
    for(int i=0; i<m; i++)
    {
        scanf("%d %d", &start, &end);
        temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for(int i=1; i<=n; i++) printf("%d ", arr[i]);
    return 0;
}