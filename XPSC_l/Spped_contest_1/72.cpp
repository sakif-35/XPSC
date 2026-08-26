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
        int mx = 0, x = 0;
        int y = 4;
        while(y--){
            cin >> x;
            mx = max(mx,x);
        }
        cout << mx << endl;

    }

    return 0;
}