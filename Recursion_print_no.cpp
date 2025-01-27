#include <iostream>
using namespace std;

void saydigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;
    saydigit(n, arr);
    cout << arr[digit] << " ";
}

// void saydigit(int n, string arr[])
// {
//     while(n!=0){
//         int digit = n %10;
//         n=n/10;
//         cout<<arr[digit];
//     }
// }
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "Eight", "nine"};
    int n;
    cin >> n;

    saydigit(n, arr);

    return 0;
}
