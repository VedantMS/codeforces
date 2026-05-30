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
 
        int a = 0, b = 0;
        
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            
            if(num == -1)       a++;
            else                b++;
        }
 
        int ans = 0;
 
        while(a > b) {
            a--;
            b++;
 
            ans++;
        }
 
        if(a & 1)               ans += 1;
 
        cout << ans << '
';
    }
 
    return 0;
}