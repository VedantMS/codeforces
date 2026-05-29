#include<bits/stdc++.h>
 
using namespace std;
 
void grasshopper(int x, int k) {
    int ans = 0;
    
    if(x % k != 0) {
        cout << 1 << '
';
        cout << x << '
';
        return;
    }
 
    cout << 2 << '
';
    cout << x - 1 << ' ' << 1 << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int x, k;
        cin >> x >> k;
 
        grasshopper(x, k);
    }
    
    return 0;
}