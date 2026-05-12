#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k;
        cin >> n >> k;
 
        int ans = k;
        int even = 0;
 
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            if(num % k == 0)        ans = 0;
            
            if(num % 2 == 0)        even++;
 
            ans = min(ans, k - num % k);
        }
 
        if(k == 4)      ans = min(ans, max(0, 2 - even));
 
        cout << ans << '
';
    }
 
    return 0;
}