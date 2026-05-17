#include<iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string ans = "NO";
 
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
 
            if(i == 0 && a == 1)        ans = "YES";
        }
 
        cout << ans << '
';
    }
 
    return 0;
}