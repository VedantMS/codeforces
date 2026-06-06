#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n + 1, 0);
        for(int i = 1; i <= n; i++)     cin >> a[i];
 
        for(int i = 1; i <= n; i++)      a[i] = a[i] + a[i - 1];
 
        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;
 
            int sum = a[n] - a[r] + a[l - 1] + (r - l + 1) * k;
 
            cout << (sum & 1 ? "YES" : "NO") << '
';
        }
    }
 
    return 0;
}