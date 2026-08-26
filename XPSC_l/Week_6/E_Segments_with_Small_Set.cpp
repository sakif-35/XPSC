#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    int l = 0, r = 0;
    long long cnt = 0;
    map<int,int> mp;
    mp[vec[l]]++;

    while(r<n){
        if(mp.size()<=k){
            cnt += (r-l+1);
            r++;
            if(r<n) mp[vec[r]]++;
        }
        else{
            mp[vec[l]]--;
            if(mp[vec[l]]==0) mp.erase(vec[l]);
            l++;
        }
    }

    cout << cnt;

    return 0;
}