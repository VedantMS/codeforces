#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector<int> prime(n + 1, 0);
    int ans = 0;
 
    for (int i = 2; i < n; i++) {
        if (prime[i] == 0) {
            for (int j = i + i; j <= n; j += i) {
                prime[j]++;
            }
        }
    }
 
    for (int i = 6; i <= n; i++) {
        if (prime[i] == 2) {
            ans++;
        }
    }
 
    cout << ans;
}