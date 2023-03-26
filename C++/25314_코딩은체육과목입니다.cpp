#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    temp=n/4;
    for(int i=0; i<temp; i++)
        printf("long ");
    printf("int");
    return 0;
}

/* python
n=int(input())
for i in range(n/4) :
    print("long ")
print('int')
*/