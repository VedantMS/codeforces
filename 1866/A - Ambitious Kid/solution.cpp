#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    int ans = INT_MAX;
 
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
 
        ans = min(ans, abs(num));
    }
 
    cout << ans;
 
    return 0;
}