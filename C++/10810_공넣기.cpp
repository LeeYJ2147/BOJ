#include <stdio.h>
int arr[101];

int main()
{
    int start, end, n, m, temp;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d", &start, &end, &temp);
        for(int j=start; j<=end; j++)
            arr[j]=temp;
    }
    for(int i=1; i<=n; i++) printf("%d ", arr[i]);
    return 0;
}