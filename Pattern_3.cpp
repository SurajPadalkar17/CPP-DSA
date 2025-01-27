#include <iostream>
using namespace std;

int main()
{
    // i = row, j = col, s = space
    // int i, j, n, s;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    /*
     *
     **
     ***
     ****
     */

    // for (i = 1; i <= n; i++)
    // {
    //     for (s = n - i; s > 0; s--)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
     * * * *
     * * *
     * *
     *
     */

    // for (i = 1; i <= n; i++)
    // {
    //     for (s = 1; s <i; s++)
    //     {
    //         cout << " ";
    //     }
    //     for (j =0; j <= n-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
           1
         2 1
       3 2 1
     4 3 2 1
    // */
    // for (i = 1; i <= n; i++)
    // {
    //     // Print leading spaces
    //     for (s = 1; s <= n - i; s++)
    //     {
    //         cout << "  ";
    //     }

    //     // Print numbers in decreasing order
    //     for (j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }

    //     // Move to the next line
    //     cout << endl;
    // }

    /*
               1
              1 2 1
             1 2 3 2 1
            1 2 3 4 3 2 1
    */

    
    int i=1;
    while (i<=n)
    {
        //For space
        int s =n-i;
        while (s)
        {
            cout<<" ";
            s = s -1;

        }
        //for 2nd tri
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j=j+1;
        }
        //3 rd tri
        int start=i-1;
        while (start)
        {
            cout<<start;
            start=start-1;
        }
        
        cout<<endl;
        i=i+1;
        
    }
    

    return 0;
}
