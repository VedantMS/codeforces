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
 
        int left = 0, right = n - 1;
 
        while(left < right) {
            if(s[left] != s[right]) {
                left++;
                right--;
 
                continue;
            }
 
            break;
        }
 
        cout << n - 2 * left << '
';
    }
 
    return 0;
}