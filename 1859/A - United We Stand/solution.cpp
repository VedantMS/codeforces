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
 
        sort(a.begin(), a.end());
 
        if(a[0] == a[n - 1]) {
            cout << -1 << '
';
            continue;
        }
 
        vector<int> b, c;
        int num = a[n - 1];
 
        for(int i = 0; i < n; i++) {
            if(a[i] == num)     c.push_back(a[i]);
            else                b.push_back(a[i]);
        }
 
        cout << b.size() << ' ' << c.size() << '
';
        
        for(auto &k : b)        cout << k << ' ';
        cout<< '
';
        
        for(auto &k : c)        cout << k << ' ';
        cout<< '
';
    }
 
    return 0;
}