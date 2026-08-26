#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        vector<int> a(n),h(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> h[i];
        int l = 0, r = 1, d = 0;
        long long sum = 0;
        vector<pair<int,int>> vec;

        if(n==1) vec.push_back({0,0});
        else{
            while(r<n){
                if(h[r-1]%h[r] == 0) r++;
                else{
                    vec.push_back({l,r-1});
                    l = r;
                    r++;
                }
                if(r==n) vec.push_back({l,r-1});
            }
        }

        for(auto [x,y] : vec){
            sum = 0;
            l = x, r = x;
            while(r<=y){
                sum += a[r];
                if(sum<=k){
                    d = max(d, r-l+1);
                }
                else{
                    sum -= a[l];
                    l++; 
                }
                r++;
            }
        }

        cout << d << endl;

    }

    return 0;
}