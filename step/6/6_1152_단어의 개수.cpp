#include <string.h>
#include <iostream>

int main()
{
    char str[1000001];
    int wasword=0, words=0;
    std::cin.getline(str, 1000000);
    int len=strlen(str);
    str[len]=' ';
    for(int i=0; i<len+1; i++)
    {
        if(str[i]==' ' && wasword)
        {
            words++;
            wasword=0;
        }
        else if(str[i]!=' ') wasword=1;
    }
    printf("%d", words);
    return 0;
}