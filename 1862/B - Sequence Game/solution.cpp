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
 
        vector<int> b(n), a;
 
        for(auto &it : b)       cin >> it;
 
        a.push_back(b[0]);
 
        for(int i = 1; i < n; i++) {
            if(b[i] < b[i - 1]) {
                a.push_back(1);
            }
 
            a.push_back(b[i]);
        }
 
        int ans = a.size();
 
        cout << ans << '
';
 
        for(int i = 0; i < ans; i++) {
            cout << a[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}