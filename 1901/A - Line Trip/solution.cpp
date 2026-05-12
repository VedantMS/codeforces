#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++) {
        int n, x;
        cin >> n >> x;
 
        int ans = 0;
        int a = 0, b = 0;
 
        for(int j = 0; j < n; j++) {
            cin >> b;
            ans = max(ans, b - a); 
            a = b;
        }
 
        ans = max(ans, 2 * (x - a));
 
        cout << ans << '
';
    }
 
    return 0;
}