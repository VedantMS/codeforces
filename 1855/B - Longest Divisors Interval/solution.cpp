#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n;
        cin >> n;
 
        int i = 1;
 
        while(n % i == 0)       i++;
 
        cout << i - 1 << '
';
    }
 
    return 0;
}