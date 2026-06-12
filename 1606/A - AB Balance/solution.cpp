#include <iostream>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    if(s[0] != s[s.size() - 1]) {
        s[0] = s[s.size() - 1];
    }
 
    cout << s << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}