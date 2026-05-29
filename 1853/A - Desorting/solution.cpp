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
 
        int ans = -1;
 
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i - 1]) {
                ans = 0;
                break;
            }
        }
 
        if(ans == -1) {
            ans = INT_MAX;
 
            for(int i = 1; i < n; i++) {
                ans = min(ans, a[i] - a[i - 1]);
            }
 
            ans = ans / 2 + 1;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}