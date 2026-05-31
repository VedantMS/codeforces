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
 
        int ans = 0;
        int count = 0;
 
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            if(num == 1) {
                count = 0;
                continue;
            }
 
            count++;
 
            ans = max(ans, count);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}