#include <stdio.h>
#include <string.h>

int checker[27], len;
char words[101];

int isContinue(int times, int location)
{
    if(location+times == len) return times;
    if(words[location]==words[location+times]) return isContinue(times+1, location);
    else return times;
}

int main()
{
    int repeatNumber, ans=0, j, warn;
    scanf("%d", &repeatNumber);
    for(int i=0; i<repeatNumber; i++)
    {
        for(j=0; j<27; j++) checker[j]=0;
        scanf("%s", words);
        len=strlen(words);
        for(j=0; j<len; )
        {
            if(checker[int(words[j])-97]) break;
            checker[int(words[j])-97]++;
            j+=isContinue(1, j);
            if(j==len) {ans++; break;}
        }
    }
    printf("%d", ans);
}