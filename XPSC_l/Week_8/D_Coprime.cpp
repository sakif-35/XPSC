#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        map<int,int> mp;
        vector<int> index(1001);
        int ans = -1;
        for(int i=0; i<n; i++){
            cin >> x;
            mp[x]++;
            index[x] = i+1;
        }

        for(auto[x,y] : mp){
            for(auto[p,q] : mp){
                if(gcd(x,p)==1){
                    ans = max(ans,index[x]+index[p]);
                }
            }
        }

        cout << ans << endl;
        

    }

    return 0;
}