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
        vector<int> vec(n);
        for(int i=0; i<n; i++) cin >> vec[i];
        unordered_map<int,int> mp,mp1;
        mp[vec[0]];
        int count = 1;
        for(int i=1; i<n; i++){
                mp1[vec[i]];

                bool flag = true;
                for(auto [x,y] : mp){
                    if(mp1.count(x)==0){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    count++;
                    mp.clear();
                    mp = mp1;
                    mp1.clear();
                }
            }
            cout << count << endl;
        }

    return 0;
}