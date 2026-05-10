#include<iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b, c;
    cin >> a >> b >> c;
 
    if((a + b + c) % 2 != 0) {
        cout << "Impossible";
        return 0;
    }
 
    int x = (a + b - c) / 2;
    int y = (b + c - a) / 2;
    int z = (a + c - b) / 2;
 
    if(x >= 0 && y >= 0 && z >= 0) {
        cout << x << " " << y << " " << z;
    }
 
    else {
        cout << "Impossible";
    }
 
    return 0;
}