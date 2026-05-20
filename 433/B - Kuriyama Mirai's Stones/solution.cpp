#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin >> n;
 
    vector<long long> v(n + 1, 0);
    vector<long long> u;
 
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
 
    u = v;
 
    sort(u.begin(), u.end());
 
    for(int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
        u[i] += u[i - 1];
    }
 
    long long m;
    cin >> m;
 
    while(m--) {
        long long type, l, r;
        cin >> type >> l >> r;
 
        if(type == 1) {
            cout << v[r] - v[l - 1] << '
';
            continue;
        }
 
        cout << u[r] - u[l - 1] << '
';
    }
 
    return 0;
}