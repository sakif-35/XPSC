#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        long long a,b;
        cin >> a >> b;
        if(b==1){
            cout << "NO\n";
            continue;
        }
        long long  z = (a*b)*2, y = z-a, x = z-y;
        cout << "YES\n" << x << " " << y << " " << z << "\n"; 

    }

    return 0;
}