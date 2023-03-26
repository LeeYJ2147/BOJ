#include <iostream>
using namespace std;

int main()
{
    int start, stand, end;
    int n, m; // n은 arr개수, m은 반복수
    int hi;
    int temp[101], arr[101];
    cin >> n >> m;
    while(m--)
    {
        cin >> start >> end >> stand;
        hi = end-stand+start;
        if(start+end <= 2*stand) // stand가 start쪽에 가까움 -> temp에 start쪽 저장
        {
            for(int i=0; i<stand-start; i++)
                temp[i]=arr[start+i];
            for(int i=start; i<=hi; i++)
                arr[i]=arr[stand+i];
            for(int i=0; i<stand-start; i++)
                arr[i+hi+1] = temp[i];
        }
        else // stand가 end쪽에 가까움
        {
            for()
        }
    }
}