#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, t;
    cin >> n >> t;
 
    vector<int> a(n, 0);
 
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
 
    int i = 1;
 
    while (true) {
        if (i == t) {
            cout << "YES 
";
            break;
        }
 
        else if (i > t) {
            cout << "NO 
";
            break;
        }
 
        i = i + a[i];
    }
 
    return 0;
}