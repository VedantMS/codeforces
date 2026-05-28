#include<bits/stdc++.h>
 
using namespace std;
 
string buttons(int a, int b, int c) {
    if(a + (c % 2) > b) {
        return "First 
";
    }
 
    return "Second 
";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        cout << buttons(a, b, c);
    }
 
    return 0;
}