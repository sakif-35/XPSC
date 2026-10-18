#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int l,r;
        cin >> l >> r;

        if(l==r && l%2==1){
            bool flag = false;
            int target = sqrt(l);
            for(int i=2; i<= target; i++){
                if(l%i==0){
                    cout << i << " " << l-i << endl;
                    flag = true;
                    break;
                }
            }
            if(!flag) cout << -1 << endl;
            continue;
        }
        if(r<=3){
            cout << -1 << endl;
            continue;
        }
        
        int ans = l;
        if(l%2==1) ans++;
        if(l>2) ans /= 2;
        cout << ans << " " << ans << endl;


    }

    return 0;
}