#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Convert input string to lowercase for comparison
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        // Check if the string matches "yes"
        if (s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
