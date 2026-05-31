#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n, k;
        cin >> n >> k;
 
        string ans = "NO";
 
        if(n % 2 == 0 || (n - k) % 2 == 0) {
            ans = "YES";
        }
 
        cout << ans << '
';
    }
 
    return 0;
}