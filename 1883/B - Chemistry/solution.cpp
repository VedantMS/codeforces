#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        vector<int> freq(26, 0);
        for(char ch : s) {
            freq[ch - 'a']++;
        }
 
        int oddCount = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 == 1) {
                oddCount++;
            }
        }
 
        if(oddCount - k <= 1) {
            cout << "YES 
";
            continue;
        }
 
        cout << "NO 
";
    }
 
    return 0;
}