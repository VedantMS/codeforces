#include<iostream>
#include<string>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, m;
        cin >> n >> m;
 
        string s, x;
        cin >> s >> x;
 
        int ans = 0;
 
        for(ans = 0; ans <= 5; ans++) {
            if(s.find(x) != string::npos)     break;
            s += s;
        }
 
        cout << (ans > 5 ? -1 : ans) << '
';
    }
 
    return 0;
}