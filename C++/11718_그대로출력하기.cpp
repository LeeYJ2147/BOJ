#include <iostream>
using namespace std;

int main()
{
    string in;
    while(1)
    {
        getline(cin, in);
        if(in=="") break;
        cout << in << endl;
    }
    return 0;
}