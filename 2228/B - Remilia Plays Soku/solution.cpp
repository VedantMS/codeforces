#include<iostream>
#include<iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
 
        if(n <= 3) {
            cout << 1 << '
';
            continue;
        }
 
        long long d = abs(x1 - x2);
        d = min(d, n - d);
        
        cout << d + k << '
';
    }
 
    return 0;
}