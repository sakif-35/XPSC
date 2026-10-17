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
        int m = 1e9+7;
        long long ans = 1;
        for(int i=n; i>=1; i--){
            ans = ans * i;
            ans %= m;
        }

        cout << ans << endl;

    }

    return 0;
}