#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    int sum = 0;
 
    int count256 = min({a, c, d});
    sum += 256 * count256;
    a -=count256;
 
    int count32 = min(a, b);
    sum += 32 * count32;
 
    cout << sum;
 
    return 0;
}