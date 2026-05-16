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
        cin >> n;
 
        int a = 0, b = 0, c = 0;
 
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            int r = num % 3;
 
            if(r == 0)          a++;
            else if(r == 1)     b++;
            else                c++;
        }
 
        int ans = 0;
        int pairs = min(b, c);
 
        ans += a + pairs;
        ans += (b - pairs) / 3;
        ans += (c - pairs) / 3;
 
        cout << ans << '
';
    }
 
    return 0;
}