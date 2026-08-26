#include <bits/stdc++.h>
using namespace std;

bool check_bit(int x, int ind){
    return (x & (1<<ind)); 
}

void set_bit(int &x, int ind){
    x |= (1<<ind) ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        vector<int> vec(n);
        for(int i=0; i<n; i++) cin >> vec[i];
        int ind = 30;

        while(k>0 && ind>=0){
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(!check_bit(vec[i],ind)) cnt++;
            }

            if(cnt<=k && cnt>0){
                for(int i=0; i<n; i++){
                    if(!check_bit(vec[i],ind)){
                        set_bit(vec[i],ind);
                        k--;
                    }
                }
            }
            ind--;
        }

        int ans = vec[0];
        for(int i=1; i<n; i++) ans &= vec[i];

        cout << ans << "\n";

    }

    return 0;
}