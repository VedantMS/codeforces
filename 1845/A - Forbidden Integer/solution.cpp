#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        if(x == 1 && (k == 1 || (k == 2 && n % 2 != 0))) {
            cout << "NO 
";
            continue;
        }
 
        cout << "YES 
";
 
        if(x != 1) {
            cout << n << '
';
            for(int i = 0; i < n; i++)          cout << 1 << ' ';
            cout << '
';
            continue;
        }
 
        if(n % 2 == 0) {
            cout << n / 2 << '
';
            for(int i = 0; i < n / 2; i++)      cout << 2 << ' ';
            cout << '
';
            continue;
        }
 
        cout << (n - 3) / 2 + 1 << '
';
        cout << 3 << '
';
        for(int i = 0; i < (n - 3) / 2; i++)          cout << 2 << ' ';
        cout << '
';
    }
 
    return 0;
}