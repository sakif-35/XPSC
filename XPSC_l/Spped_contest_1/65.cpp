#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int t,n,N;
        cin >> t >> n >> N;
        long long ans = 0;
        if(N/n < t){
            while(true){
                ans += (n*n);
                N -= n;
                if(N<n){
                    ans += (N*N);
                    break;
                }
            }
        }
        else{
            ans = t*(n*n);
        }
        cout << ans << endl;

    }

    return 0;
}