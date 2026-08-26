#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int a = n, b = n;
        int ind = __lg(n);
        a &= ~(1<<ind);
        b &= (1<<ind);
        cout << a << " " << b << "\n";

    }

    return 0;
}