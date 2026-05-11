#include<iostream>
#include<set>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
 
        long long xk, yk;
        cin >> xk >> yk;
 
        long long xq, yq;
        cin >> xq >> yq;
 
        set<pair<long long, long long>> king, queen;
 
        int dx[] = {-1, -1, 1, 1};
        int dy[] = {-1, 1, -1, 1};
 
        for(int i = 0; i < 4; i++) {
            king.insert({xk + dx[i] * a, yk + dy[i] * b});
            king.insert({xk + dx[i] * b, yk + dy[i] * a});
 
            queen.insert({xq + dx[i] * a, yq + dy[i] * b});
            queen.insert({xq + dx[i] * b, yq + dy[i] * a});
        }
 
        int ans = 0;
 
        for(auto &positions : king) {
            if(queen.find(positions) != queen.end()) {
                ans++;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}