#include <iostream>
#include <string.h>

int DT[27];

int main()
{
    char temp;
    int max=0, check=0;
    temp=std::cin.get();
    for(int i=0; temp!='\n' || i<10; i++)
    {
        if(int(temp)-65>26) DT[int(temp)-26]++;
        else DT[int(temp)]++;
        temp=std::cin.get();
    }
    for(int i=0; i<26; i++)
    {
        if(max<DT[i]) max=DT[i], check=0;
        else check++;
    }
    if(check) printf("?");
    else printf("%c", max+65);
    return 0;
}



/* 시간초과
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