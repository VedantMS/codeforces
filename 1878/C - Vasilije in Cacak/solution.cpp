#include<iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;
 
        long long S_min = k * (k + 1) / 2;
        long long S_max = k * (2 * n - k + 1) / 2;
 
        string ans = "YES";
        if(x < S_min || x > S_max) {
            ans = "NO";
        }
 
        cout << ans << '
';
    }
 
    return 0;
}