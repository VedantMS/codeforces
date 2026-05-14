#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
 
        long long ans = b;
 
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            ans += min(x, a - 1);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}