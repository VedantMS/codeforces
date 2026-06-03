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
 
        vector<long long> a(n);
        int num = 0;
 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 2)       num++;
        }
 
        int ans = 0;
 
        if(num & 1) {
            ans = -1;
        }
 
        else if(num == 0) {
            ans = 1;
        }
        
        else {
            int temp = num;
 
            for(int i = 0; i < n; i++) {
                if(a[i] == 2)       temp--;
                if(temp == num / 2)      {
                    ans = i + 1;
                    break;
                }
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}