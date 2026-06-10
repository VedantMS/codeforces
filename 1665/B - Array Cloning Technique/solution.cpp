#include<bits/stdc++.h>
 
using namespace std;
 
int solve() {
    int n;
    cin >> n;
 
    map<int, int> mp;
    int freq = 0;
 
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num]++;
        freq = max(freq, mp[num]);
    }
 
    if(freq == n) {
        return 0;
    }
 
    int ans = 0;
 
    while(freq < n) {
        ans++;
 
        int num = min(freq, n - freq);
        ans += num;
 
        freq += num;
    }
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        cout << solve() << '
';
    }
 
    return 0;
}