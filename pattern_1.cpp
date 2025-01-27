#include <iostream>
using namespace std;

int main()
{ /*
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   */
    int n;
    cout<<"Enter the value of n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // For number printing

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}