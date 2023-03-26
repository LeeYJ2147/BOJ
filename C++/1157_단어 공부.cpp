#include <stdio.h>

int DT[60];
char sen[1000001];

int main()
{
    int max=0, maxNum=0, check=0;
    scanf("%s", sen);
    for(int i=0; sen[i]!=0; ++i)
        DT[int(sen[i])-65]++;
    for(int i=0; i<27; i++)
    {
        if(max<DT[i]+DT[i+32]) max=DT[i]+DT[i+32], maxNum=i, check=0;
        else if(max==DT[i]+DT[i+32]) check++;
    }
    if(check) printf("?");
    else printf("%c", maxNum+65);
    return 0;
}



/* 시간초과, strlen(str)을 n번 반복할 때마다 처리하므로 오래걸렸을 것.
// 위 추론이 정확함, i<strlen(str) 말고 int len=어쩌구, i<len했을 때는 시간초과 없음.
int main()
{
    char str[1000001];
    int max=0, num, chk;
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++)
        DT[int(str[i])-65]++;
    for(int i=0; i<26; i++)
    {
        if(DT[i]+DT[i+32] > max) max=DT[i]+DT[i+32], num=i, chk=0;
        else if(DT[i]+DT[i+32] == max) chk++;
    }
    if(chk) printf("?");
    else printf("%c", num+65);
    return 0;
}
*/