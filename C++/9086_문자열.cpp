#include <iostream>
using namespace std;

int main()
{
    int n;
    string A_Z;
    cin >> n;
    while(n--)
    {
        cin >> A_Z;
        cout << A_Z[0] << A_Z[A_Z.length()-1] << endl;
    }
    return 0;
}