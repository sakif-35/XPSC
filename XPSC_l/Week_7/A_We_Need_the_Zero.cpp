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
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        bool flag = false;
        int ans = 0;
        for(int i=0; i<256; i++){
            for(int j=0; j<n; j++){
                b[j] = a[j]^i;
            }
            ans = b[0];
            for(int j=1; j<n; j++){
                ans ^= b[j];
            }
            if(ans==0){
                flag = true;
                ans = i;
                break;
            }
        }
        (flag) ? cout << ans << "\n" : cout << -1 << "\n";

    }

    return 0;
}