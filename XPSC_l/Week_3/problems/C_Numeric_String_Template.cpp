#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,m;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        cin >> m;
        string s;
        while(m--){
            
            unordered_map<int,char> mp;
            unordered_map<char,int> mp1;
            bool flag = true;
            cin >> s;
            if(a.size()!=s.size()) flag = false;
            if(flag){
                for(int i=0; i<s.size(); i++){
                    if(mp.count(a[i])==0) mp[a[i]] = s[i];
                    else if(mp[a[i]] != s[i]){
                        flag = false;
                        break;
                    }
                    if(mp1.count(s[i])==0) mp1[s[i]] = a[i];
                    else if(mp1[s[i]] != a[i]){
                        flag = false;
                        break;
                    }
                }
            }
            cout << (flag ? "YES\n" : "NO\n");
        }   
    }

    return 0;
}