#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,x, distinct = 0;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    map<int,int> mp; 
    vector<int> d(n);
    
    for(int i=n-1; i>=0; i--){
        if(mp[v[i]]==0) distinct++;
        mp[v[i]]++;
        d[i] = distinct;
    }   
    
    for(int i=0; i<m; i++){
        cin >> x;
        cout << d[x-1] << endl;
    }


    return 0;
}