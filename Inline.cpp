#include <iostream>
using namespace std;

inline int getmax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{

    int a = 1, b = 2;
    int ans = 0;
    ans = (a > b) ? a : b; // if else

    cout << "The greter value is " << ans << endl;

    a = a + 3;
    b = b + 1;
    ans =getmax(a,b); // if else
    cout << "The greter value is " << ans << endl;

    return 0;
}