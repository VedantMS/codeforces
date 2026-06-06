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
 
        int ans = 0;
 
        for(int i = 1; i <= n; i++) {
            int num;
            cin >> num;
 
            int distance = abs(num - i);
 
            ans = gcd(ans, distance);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}