#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        char c;
        string s;
 
        cin >> n >> c >> s;
 
        if(c == 'g') {
            cout << 0 << '
';
            continue;
        }
 
        s += s;
 
        int ans = 0, index = -1;
 
        for(int i = 2 * n - 1; i >= 0; i--) {
            if(s[i] == 'g')     index = i;
 
            if(s[i] == c && index != -1 && i < n)       ans = max(ans, index - i);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}