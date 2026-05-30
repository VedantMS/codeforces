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
 
        vector<int> a(n);
        for(auto &it : a)       cin >> it;
 
        for(int i = 0; i < n; i++) {
            cout << (n + 1) - a[i] << (i == n - 1 ? "" : " ");
        }
 
        cout << '
';
    }
 
    return 0;
}