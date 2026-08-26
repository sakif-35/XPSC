#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<char> vec, v;
        char c;
        while(n--){
            cin >> c;
            vec.push_back(c);
        }
        v = vec;
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        map<char,char> mp;
        n = v.size();
        for(int i=0; i<n; i++){
            mp[v[i]] = v[n-1-i];
        }
        for(char c : vec)  cout << mp[c];
        cout << endl;

    }

    return 0;
}