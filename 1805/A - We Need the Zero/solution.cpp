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
 
        int sum = 0;
 
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            sum ^= num;
        }
 
        int ans;
 
        if(n % 2 != 0) {
            ans  = sum;
        }
 
        else {
            if(sum == 0) {
                ans = 0;
            }
 
            else {
                ans = -1;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}