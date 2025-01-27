#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // for find function

using namespace std;

int main()
{

    int t;
    cin >> t; // Read number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read size of arrays

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // Read array a
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i]; // Read array b
        }

        int m;
        cin >> m; // Read size of array d

        vector<int> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i]; // Read array d
        }

        // Check if the last element of d exists in b
        if (find(b.begin(), b.end(), d[m - 1]) == b.end())
        {
            cout << "NO\n"; // Output NO if the last element of d is not in b
            continue;       // Move to the next test case
        }

        multiset<int> available(d.begin(), d.end());

        // Check if the elements of b can be formed using d
        bool isPossible = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                // If b[i] is not available, output NO
                if (available.find(b[i]) == available.end())
                {
                    isPossible = false;
                    break;
                }
                // Remove one instance of b[i] from the available set
                available.erase(available.find(b[i]));
            }
        }

        // Output result
        if (isPossible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
