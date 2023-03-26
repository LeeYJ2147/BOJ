#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if(year%4) printf("0"); // 4의 배수가 아닐 때
    else // 4의 배수
    {
        if(!(year%100)) // 100의 배수일 때
        {
            if(year%400) printf("0"); // 400의 배수가 아닐 때
            else printf("1"); // 400의 배수일 때
        }
        else printf("1"); // 100의 배수가 아닐 때
    }
    return 0;
}