#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    vector<int> t(n), s(n);

    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> s[i];
    }

    long long totalScore = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] <= 0) {
            
            continue;
        }

        
        int rawScore = a[i] - b[i] * t[i] - 50 * (s[i] - 1);
        int finalScore = max(c[i], rawScore);

        if (finalScore > 0) {
            totalScore += finalScore;
        }
    }

    cout << totalScore << endl;
    return 0;
}
