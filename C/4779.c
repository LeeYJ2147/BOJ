// 4779 - 칸토어 집합
#include <stdio.h>

void init(char* line, int size)
{
    for(int i=0; i<size; i++)
        line[i] = '-';
}

void erase(char* line, int size, int point)
{
    if(size==1) return;
    erase(line, size/3, point-(size/3));
    for(int i=point-(size/6); i<=point+(size/6); i++) line[i] = ' ';
    erase(line, size/3, point+(size/3));
    return;
}

int main()
{
    int n, size;
    char line[531442] = {};
    while( scanf("%d", &n) == 1 )
    {
        size=1;
        for(int i=0; i<n; i++) size*=3;

        init(line, size);
        erase(line, size, size/2);

        printf("%.*s\n", size, line);
    }
    return 0;
}