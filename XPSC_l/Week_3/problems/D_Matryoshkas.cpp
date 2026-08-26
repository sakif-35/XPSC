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
        int total = 0, old = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            mp[x]++;
        }
        
        while(!mp.empty()){
            old = -1;
            for(auto it=mp.begin(); it!=mp.end(); ){
                x = it->first;
                if(x!=old+1){
                    total += 1;
                }
                mp[x]--;            
                old = x;
                if(mp[x]==0) mp.erase(it++);
                else ++it;
            }
        }
        cout << total << endl;

    }

    return 0;
}