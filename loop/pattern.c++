#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    // First half of diamond
    for(int i=1; i<=n/2+1; i++)
    {
        // Print spaces
        for(int j=1; j<=(n/2+1)-i; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int k=1; k<=(2*i)-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Second half of diamond
    for(int i=n/2; i>=1; i--)
    {
        // Print spaces
        for(int j=1; j<=(n/2+1)-i; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int k=1; k<=(2*i)-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}