#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k,a,b, x, p=1;
        cin >> n >> k;
        map<int,pair<int,int>> mp;
        while(n--){
            cin >> x;
            if(mp[x].first==0){
                mp[x].first = p;
                mp[x].second = p;
            } 
            else mp[x].second = p;
            p++;
        }
        while(k--){
            cin >> a >> b;
            if(mp[a].first==0 || mp[b].second==0) cout << "NO\n";
            else if(mp[a].first<mp[b].second) cout << "YES\n"; 
            else cout << "NO\n";
        }
    }

    return 0;
}