#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
            cout << "YES 
";
            cout << i << " " << i + 1 << '
';
            return;
        }
    }
 
    cout << "NO 
";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
 
    return 0;
}