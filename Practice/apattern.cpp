#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <=(n/2)+1; i++)
    {
        for (int k = 0; k <=i; k++)
        {
            cout << " ";
        }
        for (int j = i; j<n-i-1; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}