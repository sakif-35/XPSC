#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    cin >> n >> x;
    vector<pair<int,int>> vec(n);
    for(int i=1; i<=n; i++){
        cin >> vec[i-1].first;
        vec[i-1].second = i;
    }
    sort(vec.begin(),vec.end());

    int l=0, r=vec.size()-1;
    while(l!=r){
        int sum = vec[l].first+vec[r].first; 
        if(sum == x){
            cout << vec[l].second << " " << vec[r].second;
            return 0;
        }
        else if(sum<x) l++;
        else r--;
    }

    cout << "IMPOSSIBLE";

    return 0;
}