#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long,int>> vec(n);
    for(int i=1; i<=n; i++){
        cin >> vec[i-1].first;
        vec[i-1].second = i;
    }
    sort(vec.begin(),vec.end());


    if(vec.size()>=3){
        for(int i=0; i<vec.size()-2; i++){
            int l=i+1, r=vec.size()-1;
            while(l<r){
                long long sum = vec[i].first + vec[l].first + vec[r].first; 
                if(sum == x){
                    cout << vec[i].second << " " << vec[l].second << " " << vec[r].second;
                    return 0;
                }
                else if(sum<x) l++;
                else r--;
            }
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}