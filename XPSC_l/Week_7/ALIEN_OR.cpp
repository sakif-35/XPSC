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
        map<string,int> mp;
        string s;
        for(int i=0; i<n; i++){
            cin >> s;
            mp[s]++;
        }
        string st(k,'0');
        vector<string> vec(k,st);
        for(int i=k-1; i>=0; i--){
            vec[i][i] = '1';
        }
        bool flag = true;
        for(int i=0; i<vec.size(); i++){
            if(mp.count(vec[i])==0){
                flag = false;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";

    }

    return 0;
}