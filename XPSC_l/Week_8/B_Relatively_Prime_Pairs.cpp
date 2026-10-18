#include <bits/stdc++.h>
using namespace std;

int main() {

    long long l , r;
    cin >> l >> r;
    long long d = (r-l)+1;
    if(d==1){
        cout << "NO";
        return 0;
    }
    d /= 2;
    long long x = l;
    cout << "YES\n";
    while(d--){
        cout << l << " ";
        l++;
        cout << l << "\n";
        l++;
    }

    
// test
    return 0;
}