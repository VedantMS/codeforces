#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        string n;
        cin >> n;
 
        int ans;
        ans = (n.length() - 1) * 9 + (n[0] - '0');
 
        cout << ans << '
';
    }
 
    return 0;
}