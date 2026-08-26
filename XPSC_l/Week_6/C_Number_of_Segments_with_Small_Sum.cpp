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

    while(r<n){
        if(sum<=x){
            cnt += (r-l+1);
            r++;
            if(r<n) sum += vec[r];
        }
        else{
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