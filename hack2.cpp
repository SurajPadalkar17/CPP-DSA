
#include<bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }
    
 bool isPossible = true;

// Check if the last element of d exists in b
if (find(b.begin(), b.end(), d[m - 1]) == b.end()) {
    isPossible = false;
}

multiset<int> available(d.begin(), d.end());

// Compare each element of a and b
for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
        // If b[i] is not available, set isPossible to false
        if (available.find(b[i]) == available.end()) {
            isPossible = false;
            break;
        }
        // Remove one instance of b[i] from the available set
        available.erase(available.find(b[i]));
    }
}

// Output result
if (isPossible) {
    cout << "YES\n";
} else {
    cout << "NO\n";
}

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
