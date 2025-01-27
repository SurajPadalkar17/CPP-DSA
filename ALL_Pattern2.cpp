#include <iostream>
using namespace std;
// i=row & j=column
int main()
{
    int i, j, n;
    cout << "Enter the no :";
    cin >> n;
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // /*
    // 4 3 2 1
    // 4 3 2 1
    // 4  3 2 1
    // 4 3 2 1
    // */

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << n - j + 1;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // /*
    // 1 2   3  4
    // 5 6   7  8
    // 9 10 11 12
    // 13 14 15 16
    // */

    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //     }

    //     cout << endl;
    //  }
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // int count = 0;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         count = count + 1;
    //         cout << count << " ";
    //     }
    //     cout << endl;
    // }

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */

    // for (i = 1; i <= n; i++)
    // {
    //     int value = i;
    //     for (j = 1; j <= i; j++)
    //     {

    //         cout << value;
    //         value = value + 1;
    //     }
    //     cout << endl;
    // }

    /*
    1
    2 1
    3 2 1
    4 3 2 1
    */

    // for (i = 1; i <= n; i++)
    // {
    //     int value = i;
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout<<(i-j+1);
    //         // cout << value;
    //         // value = value - 1;
    //     }
    //     cout << endl;
    // }

    /*
    A A A
    B B B
    C C C
    */

    //  for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= n; j++)
    //     {
    //         char ch= 'A'+ i - 1;
    //         cout<<ch;

    //     }
    //     cout << endl;
    // }

    /*
    A B C
    A B C
    A B C
    */

    // for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= n; j++)
    //     {
    //         char ch= 'A'+ j - 1;
    //         cout<<ch;

    //     }
    //     cout << endl;
    // }

    /*
    A B c
    D E F
    G H I
    */
    // char count = 'A';
    // for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= n; j++)
    //     {

    //         cout << count;
    //         count = count + 1; // i+j-1
    //     }
    //     cout << endl;
    // }

    /*
    A
    B B
    C C C
    */
    // char k = 'A';
    // for (i = 1; i <= n; i++)
    // {

    //    // k= k+1;
    //     for (j = 1; j <= i; j++)
    //     {
    //         char ch = ('A' + i - 1);
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    /*
        A
        B C
        D E F
        G H I J
    */
    // char k = 'A';
    // for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << k;
    //         k = k + 1;
    //     }
    //     cout << endl;
    // }

    /*
    A
    B C
    C D E
    D E F G
    */

    // for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= i; j++)
    //     {
    //         char k = 'A' + i + j - 2;
    //         cout << k;
    //         k = k + 1;
    //     }
    //     cout << endl;
    // }

    /*
    D
    C D
    B C D
    A B C D
    */

    for (i = 1; i <= n; i++)
    {
        char k = 'A' + n - i;
        for (j = 1; j <= i; j++)
        {
            cout << k;
            k = k + 1;
        }
        cout << endl;
    }

    return 0;
}