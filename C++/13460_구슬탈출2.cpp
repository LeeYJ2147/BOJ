#include <stdio.h>

int arr[11][11];

int main()
{
    int n, m;
    char temp;
    scanf("%d %d", &n, &m);
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%c", &temp);
            if(temp == '#') arr[i][j]=0;
            else if(temp == '.') arr[i][j]=2;
            else if(temp == '0') arr[i][j]=1;
            else if(temp == 'R') arr[i][j]=3;
            else if(temp == 'B') arr[i][j]=4;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    */
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%c", &temp);
            printf("%c", temp);
            /*
            if(temp == '#') printf("#");
            else if(temp == '.') printf(".");
            else if(temp == 0) printf("0");
            else if(temp == 'R') printf("R");
            else if(temp == 'B') printf("B");
            */
        }
        printf("\n");
    }
    return 0;
}