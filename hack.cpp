#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // size of array

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];  // original array
        for (int i = 0; i < n; i++) cin >> b[i];  // target array

        int m;
        cin >> m;  // number of modification operations

        // Modification operations stored as pairs of (ci, di)
        vector<pair<int, int>> modifications(m);
        for (int i = 0; i < m; i++) {
            int c, d;
            cin >> c >> d;
            modifications[i] = {c, d};  // c is index, d is the value
        }

        // Create a map to store the last modifications for each index
        unordered_map<int, int> last_mod;
        for (const auto& mod : modifications) {
            last_mod[mod.first - 1] = mod.second;  // store the last value for ci
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (last_mod.count(i) && last_mod[i] != b[i]) {
                possible = false;
                break;
            } else if (!last_mod.count(i) && a[i] != b[i]) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
