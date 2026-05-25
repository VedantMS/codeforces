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
 
        vector<long long> a(n);
        for(auto &it : a)       cin >> it;
 
        long long num;
 
        for(int i = 1; i < 62; i++) {
            num = 1LL << i;
            set<long long> st;
 
            for(int j = 0; j < n; j++)      st.insert(a[j] % num);
 
            if(st.size() == 2)      break;
        }
 
        cout << num << '
';
    }
 
    return 0;
}