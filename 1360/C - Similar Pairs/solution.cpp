#include<iostream>
#include<algorithm>
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
 
        vector<int> a(n);
 
        int even = 0, odd = 0;
 
        for(int j = 0; j < n; j++) {
            cin >> a[j];
 
            if(a[j] % 2 == 0)       even++;
            else                    odd++;
        }
 
        if(even % 2 == 0) {
            cout << "YES" << '
';
            continue;
        }
 
        sort(a.begin(), a.end());
 
        bool hasPair = false;
 
        for(int j = 1; j < n; j++) {
            if(a[j] - a[j - 1] == 1) {
                hasPair = true;
                cout << "YES" << '
';
                break;
            }
        }
 
        if(!hasPair) {
            cout << "NO" << '
';
        }
    }
 
    return 0;
}