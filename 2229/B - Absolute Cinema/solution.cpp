#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
 
        for(auto &it : a)       cin >> it;
        for(auto &it : b)       cin >> it;
 
        long long base = 0, best = 0;
 
        for(int i = 0; i < n; i++) {
            base += max(a[i], b[i]);
            best = max(best, min(a[i], b[i]));
        }
 
        cout << base + best << '
';
    }
 
    return 0;
}