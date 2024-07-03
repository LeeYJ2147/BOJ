// 2447 - 별찍기
#include <stdio.h>

char map[2188][2188] = {};

void draw(int size, int pointX, int pointY)
{
    int dx[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int dy[9] = {-1, -1, -1, 0, 0, 1, 1, 1};
    if(size == 3)
    {
        for(int i=0; i<8; i++)
        {
            map[pointX+dx[i]][pointY+dy[i]] = '*';
        }
    }
    else
    {
        for(int i=0; i<8; i++)
        {
            draw(size/3, dx[i]*(size/3)+pointX, dy[i]*(size/3)+pointY);
        }
    }
    return;
}

int main() {
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            map[i][j] = ' ';

    draw(n, n/2, n/2);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%c", map[i][j]);
        puts("");
    }
}