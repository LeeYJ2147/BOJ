#include <stdio.h>

int main()
{
    int music[9];
    for(int i=0; i<8; i++) scanf("%d", &music[i]);
    for(int i=0; i<7; i++)
    {
        if(i==6){ printf("ascending"); return 0; }
        if(music[i]-music[i+1] != -1) break;
    }
    for(int i=0; i<7; i++)
    {
        if(i==6){ printf("descending"); return 0; }
        if(music[i]-music[i+1] != 1) break;
    }
    printf("mixed");
    return 0;
}