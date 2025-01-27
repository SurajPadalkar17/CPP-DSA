#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "No is not prime";
            break;
        }
        else
        {
            cout << "No is prime ";
            break;
        }
    }

    return 0;
}