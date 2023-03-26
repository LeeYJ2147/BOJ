/*
첫 풀이 : int(calph[i])+int(calph[i+1])를 구한 뒤
그 값을 각 크로아티아 알파벳을 아스키코드로 변환한 숫자와
같은지 확인(switch case 이용)함 -> 틀렸음...
다음 풀이 : iscroalph 함수 만들어 각 문자를 확인함 -> 맞음
이유를 모르겠음
*/
#include <stdio.h>
#include <string.h>

bool iscroalph(char a, char b)
{
    if(a=='c' && b=='=') return 1;
    if(a=='c' && b=='-') return 1;
    if(a=='d' && b=='-') return 1;
    if(a=='l' && b=='j') return 1;
    if(a=='n' && b=='j') return 1;
    if(a=='s' && b=='=') return 1;
    if(a=='z' && b=='=') return 1;
    return 0;
}

int main()
{
    char calph[104];
    scanf("%s", calph);
    int len=strlen(calph), count=0;
    for(int i=0; i<len; count++)
    {
        int calph2=int(calph[i])+int(calph[i+1]);
        if(calph[i]=='d' && calph[i+1]=='z' && calph[i+2]=='=')
            i+=3;
        else if(iscroalph(calph[i], calph[i+1]))
            i+=2;
        else i++;
    }
    printf("%d", count);
    return 0;
}