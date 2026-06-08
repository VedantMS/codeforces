#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(auto &it : a)       cin >> it;
 
    int ans = 0;
 
    if(a[0] > 0)        ans++;
 
    for(int i = 1; i < n; i++) {
        if(a[i] != 0 && a[i - 1] == 0) {
            ans++;
        }
    }
 
    cout << (ans > 2 ? 2 : ans) << '
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