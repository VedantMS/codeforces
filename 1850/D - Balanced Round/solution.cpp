#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for(auto &it : a) {
            cin >> it;
        }
 
        sort(a.begin(), a.end());
 
        int count = 1, ans = 1;
 
        for(int i = 1; i < n; i++) {
            if(abs(a[i] - a[i - 1]) <= k) {
                count++;
            }
 
            else {
                count = 1;
            }
 
            ans = max(ans, count);
        }
 
        cout << n - ans << '
';
    }
 
    return 0;
}