#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if(b > d || (a + d - b) < c) {
            cout << -1 << '
';
            continue;
        }
 
        cout << (d - b) + (a + d - b - c) << '
';
    }
 
    return 0;
}