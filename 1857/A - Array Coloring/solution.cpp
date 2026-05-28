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
 
        int num = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            
            if(a & 1)       num++;
        }
 
        cout << (num & 1 ? "NO" : "YES") << '
';
    }
 
    return 0;
}