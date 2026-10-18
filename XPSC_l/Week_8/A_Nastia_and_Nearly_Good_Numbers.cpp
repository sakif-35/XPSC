#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int a,b;
        cin >> a >> b;
        long long  z = a*b, y = z-a, x = z-y;
        if(a==z){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n" << x << " " << y << " " << z << "\n"; 

    }

    return 0;
}