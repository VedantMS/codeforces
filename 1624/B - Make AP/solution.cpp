#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int num = 2 * b - c;
    if (num > 0 && num % a == 0) {
        cout << "YES 
";
        return;
    }
 
    if ((a + c) % 2 == 0) {
        num = (a + c) / 2;
        if(num > 0 && num % b == 0) {
            cout << "YES 
";
            return;
        }
    }
 
    num = 2 * b - a;
    if(num > 0 && num % c == 0) {
        cout << "YES 
";
        return;
    }
 
    cout << "NO 
";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}