#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(auto &it : a)       cin >> it;
 
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            a[i]++;
        }
    }
 
    for(int i = 0; i < n - 1; i++) {
        if(a[i + 1] % a[i] == 0) {
            a[i + 1]++;
        }
    }
 
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    cout << '
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