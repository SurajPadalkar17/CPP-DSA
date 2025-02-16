#include <iostream>
using namespace std;

int binarysquareroot(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
       
        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else   
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = binarysquareroot(n);
    cout << "The square root of " << n << " is approximately " << result << endl;

    return 0;
}
