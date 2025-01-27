#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int m;
        cin >> m;

        vector<int> d(m);
        map<int, int> dm;

        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
            dm[d[i]]++;
        }

        map<int, int> bnota;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cnt++;
                bnota[b[i]]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (dm[b[i]] != 0 && bnota[b[i]] != 0)
                {
                    dm[b[i]]--;
                    bnota[b[i]]--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (dm[b[i]] != 0)
                {
                    dm[b[i]]--;
                }
            }
        }

        bool fl2 = false;
        for (int i = 0; i < n; i++)
        {
            if (d[m - 1] == b[i])
            {
                fl2 = true;
                break;
            }
        }

        bool fl = false;
        for (auto it = bnota.begin(); it != bnota.end(); it++)
        {
            if (it->second > 0)
            {
                fl = true;
                break;
            }
        }

        if (cnt == 0)
        {
            if (fl2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }

        if (fl || !fl2)
        {
            cout << "NO" << endl;
        }
        else if (!fl && fl2)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}