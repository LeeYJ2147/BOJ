#include <stdio.h>

int main()
{
    int arr[101];
    for(int i=0;i<101;i++) arr[i]=i;
    int temp, start, end;
    int n, m;
    scanf("%d %d", &n, &m);
    while(m--)
    {
        scanf("%d %d", &start, &end);
        for(int j=start; j<=(start+end)/2; j++)
        {
            temp=arr[j];
            arr[j]=arr[start+end-j];
            arr[start+end-j]=temp;
        }
    }
    for(int i=1; i<=n;i++) printf("%d ", arr[i]);
    return 0;
}