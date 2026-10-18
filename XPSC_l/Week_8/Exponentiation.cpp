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

        if(b==0){
            cout << 1 << endl;
            continue;
        }
        if(a==0){
            cout << 0 << endl;
            continue;
        }

        int m = 1e9+7;
        long long ans = 1, mul = 1; 
        for(int i=0; i<=31; i++){
            if(i!=0)  mul *= mul;
            else mul *= a;
            mul %= m;
            if((b & (1<<i)) != 0){
                ans *= mul;
                ans %= m;
            }
        }

        cout << ans << endl;
    }

    return 0;
}