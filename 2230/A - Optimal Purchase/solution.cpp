#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n, a, b;
        cin >> n >> a >> b;
 
        if(b >= 3 * a) {
            cout << n * a << '
';
            continue;
        }
 
        long long ans = n / 3 * b + min(n % 3 * a, b);
 
        cout << ans << '
';
    }
 
    return 0;
}