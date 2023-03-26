#include <string.h>
#include <iostream>
char str[1000002];

int main()
{
    int WasSpace=1, words=0;
    std::cin.getline(str, 1000001);
    int len=strlen(str);
    str[len]=' ';
    for(int i=0; i<len; i++)
    {
        if(str[i]!=' ' && WasSpace)
        {
            words++;
            WasSpace=0;
        }
        else if(str[i]==' ') WasSpace=1;
    }
    printf("%d", words);
    return 0;
}