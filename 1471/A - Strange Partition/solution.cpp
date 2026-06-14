#include <bits/stdc++.h>
 
using namespace std;
 
void beauty() {
    long long n, x;
    cin >> n >> x;
 
    long long minBeauty = 0, maxBeauty = 0;
 
    for(int i = 0; i < n; i++) {
        long long num;
        cin >> num;
 
        minBeauty += num;
        maxBeauty += (num + x - 1) / x;
    }
   
    minBeauty = (minBeauty + x - 1) / x;
 
    cout << minBeauty << " " << maxBeauty << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        beauty();
    }
 
    return 0;
}