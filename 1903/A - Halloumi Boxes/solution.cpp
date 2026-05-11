#include<iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
 
        int a, b = 0;
        bool sorted = true;
 
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a < b)   sorted = false;
            b = a;
        }
 
        if(k >= 2 || sorted) {
            cout << "YES 
";
            continue;
        }
 
        cout << "NO 
";
    }
 
    return 0;
}