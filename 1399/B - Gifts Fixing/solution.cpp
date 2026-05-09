#include<iostream>
#include<climits>
#include<vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
 
        vector<long long> candy(n);
        vector<long long> orange(n);
 
        long long minCandy = INT_MAX, minOrange = INT_MAX;
 
        for(int i = 0; i < n; i++) {
            cin >> candy[i];
            minCandy = minCandy > candy[i] ? candy[i] : minCandy;
        }
 
        for(int i = 0; i < n; i++) {
            cin >> orange[i];
            minOrange = minOrange > orange[i] ? orange[i] : minOrange;
        }
 
        long long ans = 0;
 
        for(int i = 0; i < n; i++) {
            ans += max(candy[i] - minCandy, orange[i] - minOrange);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}