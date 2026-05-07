#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d", &n);
 
    double sum = 0;
 
    for(int i = 0; i < n; i++) {
        int drink;
        scanf("%d", &drink);
        sum += drink;
    }
 
    printf("%.12f", sum / n);
 
    return 0;
}