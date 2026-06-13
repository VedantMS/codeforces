#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(auto &it : a) {
        cin >> it;
    }
 
    for(int i = 1; i < n; i++) {
        a[i] &= a[i - 1];
    }
 
    cout << a[n - 1] << '
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