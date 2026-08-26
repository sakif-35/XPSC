#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long x, cnt = 0;
    cin >> n >> x;
    vector<long long> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    int l = 0, r = 0;
    long long sum = vec[l];

    while(l<n){
        if(sum<x){
            r++;
            if(r<n) sum += vec[r];
            else break;
        }
        else{
            cnt += (n-r);
            sum -= vec[l];
            if(l==r){
                r++;
                if(r<n) sum += vec[r];
            }
            l++;
        }
    }

    cout << cnt;

    return 0;
}