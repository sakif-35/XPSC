#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    int l = 0, r = 0, cnt = 0;
    long long sum = 0;
    
    while(l<n){
        if(l>=r){
            sum = vec[l];
            r = l;
        }
        if(sum==x){
            cnt++;
            if(l<n){
                sum -= vec[l];
                l++;
            }
            if(r<n-1){
                r++;
                sum += vec[r];
            }
        }
        else if(sum<x && r<n-1){
            r++;
            sum += vec[r];
        }
        else{
            sum -= vec[l];
            l++;
        }
        
    }
    cout << cnt << endl;

    return 0;
}
    
