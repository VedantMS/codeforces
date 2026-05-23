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
 
        int a = 1e9, b = -1e9;
 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            a = min(a, x);
            b = max(b, x);
        }
 
        cout << (b - a + 1) / 2 << '
';
    }
 
    return 0;
}