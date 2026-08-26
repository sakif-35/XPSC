#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int b,c,a;
        cin >> b >> c;
        a = c/gcd(b,c);
        
        cout  << a << endl;

    }

    return 0;
}