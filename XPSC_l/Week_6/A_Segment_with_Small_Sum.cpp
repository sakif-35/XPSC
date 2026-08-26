#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long x;
    cin >> n >> x;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    int l = 0, r = 0, cnt = 0;
    long long sum = vec[l];

    while(r<n){
        if(sum<=x){
            cnt++;
            r++;
            if(r<n) sum += vec[r];
        }
        else{
            sum -= vec[l];
            l++;
            r++;
            if(r<n) sum += vec[r];
        }
    }
    cout << cnt ;

    return 0;
}