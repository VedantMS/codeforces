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
 
        string s;
        cin >> s;
 
        int ans = 0, ones = 0, twos = 0;
        int i = 0;
 
        while(i < n) {
            if(s[i] != '.') {
                i++;
                continue;
            }
 
            int index = 0;
 
            while(i < n && s[i] == '.') {
                index++;
                i++;
            }
 
            if(index == 1)              ones++;
            
            else if(index == 2)         twos++;
            
            else if(index > 2) {
                ans = 2;
                break;
            }
        }
 
        if(ans == 0)            ans = ones + 2 * twos;
        
        cout << ans << '
';
    }
 
    return 0;
}