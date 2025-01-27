#include <iostream>
using namespace std;
// Counting no of 1 in binary .
class soution
{
public:
    int hamm(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count = count + 1;
            }
            n = n >> 1;
        }
        return count;
    }
};
int main()
{
    soution ob;
    int n;
    cin >> n;
    int count = ob.hamm(n);

    cout << count;
    return 0;
}