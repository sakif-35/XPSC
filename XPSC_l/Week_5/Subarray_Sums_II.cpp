#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    long long sum = 0, temp = 0, cnt = 0;
    vector<long long> prefix(n);
    map<long long, int> mp;
    mp[0]++;
    for(int i=0; i<n; i++){
        cin >> temp;
        sum += temp;
        prefix[i] = sum;
        temp = prefix[i] - x;
        if(mp.count(temp)!=0){
            cnt += mp[temp];
        } 
        mp[sum]++;
    }

    cout << cnt;

    return 0;
}