#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        map<int, int> a;
 
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            a[num]++;
        }
 
        if(a.size() == 1) {
            cout << "YES 
";
            continue;
        }
 
        if(a.size() > 2) {
            cout << "NO 
";
            continue;
        }
 
        auto it = a.begin();
        int num1 = it->second;
        it++;
        int num2 = it->second;
 
        cout << (abs(num1 - num2) <= 1 ? "YES 
" : "NO 
");
    }
 
    return 0;
}