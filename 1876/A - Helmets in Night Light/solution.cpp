#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n, p;
        cin >> n >> p;
 
        vector<int> a(n);
        vector<pair<long long, long long>> residents;
 
        for(int i = 0; i < n; i++)      cin >> a[i];
 
        for(int i = 0; i < n; i++) {
            long long b;
            cin >> b;
 
            residents.push_back({b, a[i]});
        }
 
        sort(residents.begin(), residents.end());
 
        long long ans = p;
 
        long long notified = n - 1;
 
        for(int i = 0; i < n; i++) {
            long long cost = residents[i].first;
            long long capacity = residents[i].second;
 
            if(cost >= p || notified == 0)       break;
 
            ans += min(notified, capacity) * cost;
 
            notified -= min(notified, capacity);
        }
 
        ans += p * notified;
 
        cout << ans << '
';
    }
 
    return 0;
}