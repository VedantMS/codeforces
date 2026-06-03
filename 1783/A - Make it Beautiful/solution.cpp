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
 
        vector<int> a(n);
        for(auto &it : a)       cin >> it;
 
        int num = 1;
 
        for(int i = 1; i < n; i++) {
            if(a[i] == a[0])        num++;
        }
 
        if(num == n) {
            cout << "NO 
";
            continue;
        }
 
        cout << "YES 
";
 
        swap(a[0], a[n - 2]);
 
        for(int i = n - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}