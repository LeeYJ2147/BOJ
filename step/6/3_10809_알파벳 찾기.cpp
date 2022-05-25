#include <stdio.h>

int main()
{
    int DT[26];
    for(int i=0; i<26; i++) DT[i]=-1;

    char alph[101];
    scanf("%s", alph);
    for(int i=0; alph[i]!='\0'; i++)
        if(DT[int(alph[i])-97]==-1) DT[int(alph[i])-97]=i;
    for(int i=0; i<26; i++) printf("%d ", DT[i]);
    return 0;
}