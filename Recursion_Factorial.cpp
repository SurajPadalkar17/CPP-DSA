#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // int m = factorial(n - 1);
    // int l = n * m;
    // or
    return n * factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter a no"<<endl;
    cin >> n;
    int ans = factorial(n);
    cout << "factorial is " << ans;

    return 0;
}