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
 
        string s;
        cin >> s;
 
        int num = 1, ans = 1;
 
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                num++;
            }
 
            else {
                num = 1;
            }
 
            ans = max(ans, num);
        }
 
        cout << ans + 1 << '
';
    }
 
    return 0;
}